#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int knapsack(string a,string b, int l1,int l2) {
    int i,j,dp[l1+1][l2+1];
    for(i=0;i<=l1;i++) for(j=0;j<=l2;j++) if(i==0 || j==0) dp[i][j]=0;
    for(i=1;i<=l1;i++) {
        for(j=1;j<=l2;j++) {
            if(a[i-1]==b[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=0;
        }
    } 
    return dp[l1][l2];
}

int main()
{
    IOS;
    string a,b;
    cin>>a>>b;
    int i,j,k,l;
    k=knapsack(a,b,a.length(),b.length());
    cout<<k;
    return 0;
}