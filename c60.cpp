#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

bool knapsack(int a[], int n) {
    int b[n],i,j,c=0;
    for(i=0;i<n;i++) b[n-i-1] = a[i];
    int dp[n+1][n+1];
    for(i=0;i<=n;i++) for(j=0;j<=n;j++) if(i==0 || j==0) dp[i][j]=0;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            if(a[i-1]==b[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    if(dp[n][n]>=3) return true;
    return false;
}

int main()
{
    IOS;
    test(t) {
        int i,j,c,x,y,n;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++) cin>>a[i];
        if(knapsack(a,n)) cout<<"YES";
        else              cout<<"NO";
        cout<<endl;
    }
    return 0;
}