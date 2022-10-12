#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int knapsack(int w[],int val[],int n,int s) {
    int i,j;
    int dp[n+1][s+1];
    for(i=0;i<=n;i++) {
        for(j=0;j<=s;j++) {
            if(i==0 || j==0) dp[i][j]=0;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=s;j++) {
            if(w[i-1] > j) dp[i][j]=dp[i-1][j];
            if (j >= w[i-1]) dp[i][j]= max(dp[i-1][j] , val[i-1]+dp[i-1][j- w[i-1]]);
        }
    }
    // for (int i = 0; i <= n; i++) {
    //     for (int j = 0; j <= s; j++) cout<<dp[i][j]<<" ";  
    //     printf("\n");
    // }

    return dp[n][s];
}

int main()
{
    int n,s,i,j,k,l;
    cin>>n>>s;
    int w[n],val[n];
    for(i=0;i<n;i++) cin>>w[i];
    for(i=0;i<n;i++) cin>>val[i];
    int ans = knapsack(w,val,n,s);
    cout<<ans<<endl;
    return 0;
}