#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int main()
{
    IOS;
    int n,i,j,t;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) cin>>a[i][j];
    }
    for(i=0;i<n/2;i++) {
        for(j=i;j<n-i-1;j++) {
            t = a[i][j];
            a[i][j] = a[j][n-i-1];
            a[j][n-i-1] = a[n-i-1][n-j-1];
            a[n-i-1][n-j-1] = a[n-j-1][i];
            a[n-j-1][i] = t;
        }
    }
    
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}