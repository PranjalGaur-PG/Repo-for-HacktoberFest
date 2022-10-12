#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int knapsack(int w[],int n) {
    int c=0,i,j,k,s=0;
    for(i=0;i<n;i++) s+=w[i];
    bool dp[n+1][s+1];
    for(i=0;i<=s;i++) dp[0][i]=false;
    for(i=0;i<=n;i++) dp[i][0]=true;
    for(i=1;i<=n;i++) {
        for(j=1;j<=s;j++) {
            if(j<w[i-1]) dp[i][j]=dp[i-1][j];
            else dp[i][j]= dp[i-1][j] || dp[i-1][j-w[i-1]] ;
        }
    }
    int mn=s;
    for(i=1;i<=s;i++) {
        if(dp[n][i]) {
            mn=min(mn,abs(2*i-s));
        }
    }
    return mn;
}

int main()
{
// fastio();
ll t;cin>>t;while(t--){
    ll n,t;
    cin>>n;
    ll ar[n];
    vector<vector<ll>> v;
    
    for(int i=0;i<n;i++) cin>>ar[i];
    ll i=1,j,l,r,d,key;
    while(i!=n){
        if(ar[i]<ar[i-1]){
            j=i-1;
            r=i+1;
            key = ar[i];
            while (j >= 0 && ar[j] > key)
            {
                ar[j + 1] = ar[j];
                j--;
            }
            ar[j + 1] = key;
            j++;
            l=j+1;d=r-l;
            v.push_back({l,r,d});
        }
        i++;
    }
    //FOR(k,0,n)cout<<ar[k]<<' ';
        cout<<v.size()<<'\n';
     for(auto x:v){
         cout<<x[0]<<' '<<x[1]<<' '<<x[2]<<'\n';
     }
}

return 0;
}