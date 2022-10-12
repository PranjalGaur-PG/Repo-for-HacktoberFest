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
    int i,j,t,n,m;
    cin>>n>>m;
    int a[n][m],b[m][n];
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) cin>>a[i][j];
    }
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) b[i][j] = a[j][i];
    }
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) cout<<b[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}