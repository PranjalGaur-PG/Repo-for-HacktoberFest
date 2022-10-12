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
    test(t) {
        ll p,a,b,c,x,y,c1,c2,ans;
        cin>>p>>a>>b>>c>>x>>y;
        c1 = b + a*x;
        c2 = c + a*y;
        if(c1>p && c2>p) cout<<0<<endl;
        else {
            if(c1>c2) ans = p/c2;
            else ans = p/c1;
            cout<<ans<<endl;
        }
    }
    return 0;
}