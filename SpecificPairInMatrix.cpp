#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int fun(int a[][n],int n) {
    int m[n][n],i,j,ma;
    m[n-1][n-1] = a[n-1][n-1];
    ma = a[n-1][n-1];
    for(i=n-2;i>=0;i--) {
        if(a[i][n-1] > ma) ma = a[i][n-1];
        m[i][n-1] = ma;
    }
    for(i=n-2;i>=0;i--) {
        if(a[n-1][i] > ma) ma = a[n-1][i];
        m[n-1][i] = ma;
    }
    for(i=)

}

int main()
{
    IOS;
    int n,i,j;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++) for(j=0;j<n;j++) cin>>a[i][j];
    cout<<fun(a,n);
    return 0;
}