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
        int n,i,j,k,l,m;
        cin>>n;
        ll a[n],s=0,c=0;
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++) {
            if(a[i]<0) s+=a[i];
            else {
                m=min(s,a[i]);
                c+=m; s-=m;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}