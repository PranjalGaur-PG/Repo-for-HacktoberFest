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
        int n,i,j,k,l;
        cin>>n;
        ll x,s=0,c,z=0;
        for(i=0;i<n;i++) {
            cin>>x;
            if(x>0) s+=x;
            else {
                if(abs(x)<s) s-= (-x);
                else {
                    z+= (-x)-s;
                    s=0;
                }
            }
        }
        cout<<z<<endl;
    }
    return 0;
}