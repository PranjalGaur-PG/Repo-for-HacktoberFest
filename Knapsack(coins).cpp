
// Program to find the minimum number of coins needed for a sum value


#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int knapsack(int c[],int n,int m) {
    int dp[n+1][m+1],i,j;
    for(i=1;i<=m;i++) dp[0][i]=INT_MAX-1;
    for(i=1;i<=n;i++) dp[i][0]=0;
    for(i=1;i<=m;i++) {
        if(i%c[0]==0) dp[1][i]=i/c[0];
        else dp[1][i]=INT_MAX-1;
    }
    for(i=2;i<=n;i++) {
        for(j=1;j<=m;j++) {
            if(j>=c[i-1]) dp[i][j]= min(dp[i-1][j], 1+dp[i][j-c[i-1]]);
            else dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][m];
}

int main()
{
    IOS;
    int n,m,i,j,k;
    cin>>n>>m;
    int c[n];
    for(i=0;i<n;i++) cin>>c[i];
    k=knapsack(c,n,m);
    cout<<k<<endl;
    return 0;
}