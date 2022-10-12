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
    int i,j,k,d=0,e=0,n,m;
    cin>>n>>m;
    int c[m];
    for(i=0;i<m;i++) cin>>c[i];
    int a[n+1][m];
    for(i=0;i<m;i++) a[i][0]=1;
    for(i=0;i<=n;i++) {
        if(i%c[0]==0) a[0][i]=1;
        else a[0][i]=0;
    }
    for(i=1;i<m;i++) {
        for(j=0;j<=n;j++) {
           if(j<c[i]) a[i][j]=a[i-1][j]; 
           else a[i][j]=a[i-1][j] + a[i][j-c[i]]; 
        }
    }
    cout<<"  ";
    for(j=0;j<=n;j++) cout<<j%10<<" ";
    cout<<endl;
    for(i=0;i<m;i++) {
        cout<<c[i]<<" ";
        for(j=0;j<=n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<a[m-1][n];
    return 0;
}