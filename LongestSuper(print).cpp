#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

void fun(string a,string b) {
    int n=a.length() , m= b.length(), i,j,k,l,c=0;
    int arr[n+1][m+1];
    for(i=0;i<=n;i++) for(j=0;j<=m;j++) arr[i][j]=0;
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            if(a[i-1]==b[j-1]) arr[i][j] = 1 + arr[i-1][j-1];
            else arr[i][j]= max(arr[i-1][j],arr[i][j-1]);
        }
    }
    string ch;
    i=n; j=m;
    while(i!=0 && j!=0) {
        if(a[i-1]==b[j-1]) {
            ch.push_back(a[i-1]); i--; j--;
        }
        else if(arr[i-1][j]>arr[i][j-1]) {
            ch.push_back(a[i-1]);
            i--;
        }
        else {
            ch.push_back(b[j-1]);
            j--;
        }
    }
    while(i>0) {
        ch.push_back(a[i-1]); i--;
    }
    while(j>0) {
        ch.push_back(b[j-1]); j--;
    }
    reverse(ch.begin(),ch.end());
    for(i=0;i<ch.size();i++) cout<<ch[i];
}

int main()
{
    IOS;
    string a,b;
    cin>>a>>b;
    fun(a,b);
    return 0;
}