#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int fun(string a,string b) {
    int n=a.length(), m=b.length(),i,j,k,c=0;
    int arr[n+1][m+1];
    for(i=0;i<=n;i++) for(j=0;j<=m;j++) arr[i][j]=0;
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            if(a[i-1]==b[j-1]) arr[i][j] = 1 + arr[i-1][j-1];
            else arr[i][j]= max(arr[i-1][j],arr[i][j-1]);
        }
    }
    return ( m + n - arr[n][m] );
}

int main()
{
    IOS;
    string a,b;
    cin>>a>>b;
    int c = fun(a,b);
    cout<<c;
    return 0;
}