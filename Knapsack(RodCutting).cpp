#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int knapsack(int w[],int v[],int n,int l) {
    int i,j,k,c=0,dp[n+1][l+1];
    for(i=0;i<=n;i++) dp[i][0]=0;
    for(i=0;i<=l;i++) dp[0][i]=0;
    for(i=1;i<=n;i++) {
        for(j=1;j<=l;j++) {
            if(j<w[i-1]) dp[i][j]=dp[i-1][j];
            else dp[i][j]= max(dp[i-1][j], (v[i-1]+dp[i][j-w[i-1]]));
        }
    }
    return dp[n][l];
}

int main()
{
    IOS;
    int i,j,k,l,n;
    cin>>l>>n;
    int w[n],v[n];
    for(i=0;i<n;i++) cin>>w[i];
    for(i=0;i<n;i++) cin>>v[i];
    k=knapsack(w,v,n,l);
    cout<<k;
    return 0;
}