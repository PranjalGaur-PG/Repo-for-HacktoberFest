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
        ll n,m;
        cin>>n>>m;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];

        sort(a.begin(), a.end());
        // reverse(a.begin(), a.end());
        if(n>m) cout<<"NO";
        else {
            ll s = 0;
            for(int i=1;i<n;i++) {
                s += a[i];
            }

            s += n;
            s += a[n-1];
            if(s<=m) cout<<"YES";
            else cout<<"NO";
        }

        cout<<endl;
    }
    return 0;
}