#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

bool isPow(ll n) {
    if(n==1) return true;
    if(n%2 != 0) return false;
    return isPow(n/2);
}

int main()
{
    IOS;
    test(t) {
        ll n,c=0;
        cin>>n;
        n++;
        while(n>0) {
            n /= 2;
            c++;
        }
        ll ans = pow(2,c-1);
        cout<<ans<<endl;
        // ll n,c=1,x,cnt=0;
        // cin>>n;
        // x=n;
        // while(c<=n) {
        //     c *= 2;
        //     cnt++;
        // }
        // cout<<cnt<<" "<<c<<endl;
    }
    return 0;
}