#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int fun(string s,string t) {
    int l1=s.size(), l2=t.size(),c=0,a,b;
    int i,j,dp[l1+1][l2+1];
    for(i=0;i<=l1;i++) for(j=0;j<=l2;j++) if(i==0 || j==0) dp[i][j]=0;
    for(i=1;i<=l1;i++) {
        for(j=1;j<=l2;j++) {
            if(s[i-1]==t[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    } 
    // for(int i=0;i<=l1;i++) {
    //     for(j=0;j<=l2;j++) cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }
        string ch;
    i=l1; j=l2;
    while(i!=0 && j!=0) {
        if(s[i-1]==t[j-1]) {
            ch.push_back(s[i-1]); i--; j--;
        }
        else if(dp[i-1][j]>dp[i][j-1]) i--;
        else j--;
    }
    reverse(ch.begin(),ch.end());
    for(i=0;i<ch.size();i++) cout<<ch[i];
    // cout<<
    c= abs(l1-l2) + (min(l1,l2)-dp[l1][l2]);
    return c;
}

int main()
{
    IOS;
    string s,t;
    cin>>s>>t;
    cout<<fun(s,t);
    return 0;
}