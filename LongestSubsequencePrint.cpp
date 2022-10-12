#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

void knapsack(string a,string b, int l1,int l2) {
    int i,j,dp[l1+1][l2+1];
    for(i=0;i<=l1;i++) for(j=0;j<=l2;j++) if(i==0 || j==0) dp[i][j]=0;
    for(i=1;i<=l1;i++) {
        for(j=1;j<=l2;j++) {
            if(a[i-1]==b[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    } 
    string ch;
    i=l1; j=l2;
    while(i!=0 && j!=0) {
        if(a[i-1]==b[j-1]) {
            ch.push_back(a[i-1]); i--; j--;
        }
        else if(dp[i-1][j]>dp[i][j-1]) i--;
        else j--;
    }
    reverse(ch.begin(),ch.end());
    for(i=0;i<ch.size();i++) cout<<ch[i];
    // return dp[l1][l2];
}

int main()
{
    IOS;
    string a,b;
    cin>>a>>b;
    int i,j,k,l;
    knapsack(a,b,a.length(),b.length());
    return 0;
}