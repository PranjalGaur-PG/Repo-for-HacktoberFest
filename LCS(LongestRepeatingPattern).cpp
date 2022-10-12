#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int solve(string s) {
    int n=s.size(),i,j;
    int dp[n+1][n+1];
    for(i=0;i<=n;i++) {
        for(j=0;j<=n;j++) {
            if(i==0 || j==0) dp[i][j]=0;
            else {
                if(s[i-1] == s[j-1] && i!=j) dp[i][j] = 1+dp[i-1][j-1];
                else dp[i][j] = max( dp[i-1][j],dp[i][j-1] );
            }
        }
    }
    return dp[n][n];
}

int main()
{
    IOS;
    string a;
    int n;
    cin>>a;
    n = solve(a);
    cout<<n;
    return 0;
}