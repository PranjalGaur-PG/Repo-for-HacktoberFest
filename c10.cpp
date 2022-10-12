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
        ll x,i,j,n,mn=INT_MAX;
        cin>>n;
        ll a[n+1];
        for(i=1;i<=n;i++) a[i]=-1;
        for(i=1;i<=n;i++) {
            cin>>x;
            if(a[x]==-1) a[x]=i;
            else a[x]=-2;
        }
        for(i=1;i<=n;i++) {
            if(a[i]>0) {
            	mn=a[i]; break;
			}
        }
        if(mn!=INT_MAX) cout<<mn<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}