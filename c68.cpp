#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)
constexpr int mx = (int)1e6;
int dp[mx+2],dp1[mx+2],n0[mx],n1[mx];

void fun() {
    string s,f="1";                                                    // XD
    cin>>s;
    int l,cur,n=s.size(),p=-1,i,j;                                     // Here we initiate all varaibles XD 
    
    for(i=0;i<n;i++) {                                                 // Here we start processing XD
        if(s[i]=='0') {
            for(j=p+1;j<=i;j++) n0[j] = i;
            p = i;
        }
    }

    for(i=p+1;i<n;i++) n0[i] = n;     
                                                                       // Processing for 0 XD 
    if(n0[0] == n) {
        cout<<"0"<<endl;  return;
    }

    p=-1;
    for(i=0;i<n;i++) {                                                 // Processing for 1 XD
        if(s[i]=='1') {
            for(j=p+1;j<=i;j++) n1[j] = i;
            p = i;
        }
    }
    for(i=p+1;i<n;i++) n1[i] = n;
                                                                       // Processing complete. Now, time for DP XD
    dp[n] = dp[n+1] = 0;
    dp1[n] = dp1[n+1] = 0;

    for(i=n-1;i>=0;i--) {
        dp[i] = dp[i+1];
        if(s[i]=='0' && n1[i]<n) dp[i] = max(dp[i] , dp[n1[i]+1]+1);
        if(s[i]=='1' && n0[i]<n) dp[i] = max(dp[i] , dp[n0[i]+1]+1);
        dp1[i] = dp1[i+1];
        if(n1[i]<n)  dp1[i] = max(dp1[i] , dp[n1[i]+1]+1);        
    }
                                                                       // Only god knows what's going on in the program XD
    l = dp1[0]+1;
    cur = n1[0]+1;
    
    for(i=1;i<l;i++) {
        if(cur>=n) {
            f.push_back('0');  
            continue;
        }
        if(n0[cur]>=n) {
            f.push_back('0');
            cur = n0[cur]+1;   
            continue;
        }
        if(dp[n0[cur]+1] < l-i-1) {
            f.push_back('0');
            cur = n0[cur]+1; 
        }
        else {
            f.push_back('1');
            cur = n1[cur]+1 ;
        }
    }
                                                                       // Time for the doing the formality of printing answer now XD
    cout<<f<<endl;
}

int main()
{
    IOS;
    test(t) {
        fun();
    }
    return 0;
}