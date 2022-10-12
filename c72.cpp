#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

ll fun(ll s) {
    ll m = 1000000007;
    s = s%m;
    return ((((s*2)%m)+m)%m);
}

int main()
{
    IOS;
    ll b,n,s=0,i,x,a;
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>x;
        s += x;
    }
    cin>>a;
    // ll m = 1000000007;
    for(i=2;i<=a+1;i++) {
        cin>>b;
        // s *= 2;
        s = fun(s);
        cout<<s<<endl;
    }
    return 0;
}