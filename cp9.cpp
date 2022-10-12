#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int main()
{
    IOS;
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        if(n==1 || n==2) cout<<1<<endl;
        else cout<<1+((n-1)*(n-2))<<endl;
    }
    return 0;
}