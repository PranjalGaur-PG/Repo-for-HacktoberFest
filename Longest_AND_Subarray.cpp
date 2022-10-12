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
        ll n,c=0,q,i,o,p,j,k;
        cin>>n;
        if(n<3) {
            cout<<1<<endl;
            continue;
        }
        o=n;
        while(n!=1) {
            n /= 2;
            c++;
        }
        j = max((o-pow(2,c)+1), pow(2,c-1));
        cout<<j<<endl;
        // j = pow(2,c);
        // p = j-1;
        // q = j/2;
        // if(o-p < q) cout<<q<<endl;
        // else cout<<o-p<<endl;
    }
    return 0;
}