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
        ll n,x,s;
        cin>>n>>x;
        s = (1+n); s *= n; s /= 2;
        if(s-x<=0 || s-x > n) cout<<-1;
        else cout<<s-x;
        cout<<endl;
    }
    return 0;
}