#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int knapsack(vector<int> a) {
    sort(a.begin(),a.end());
    int i,j,n=a.size();
    if(n==0) return 0;
    int dp[n+1][n+1];
    for(i=0;i<=n;i++) for(j=0;j<=n;j++) if(i==0 || j==0) dp[i][j]=0;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            if(a[i-1]==(a[j-1]-1)) dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    } 
    return (dp[n][n]+1);
}

int main()
{
    IOS;
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int c=knapsack(a);
    cout<<c;
    return 0;
}