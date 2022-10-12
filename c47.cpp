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
    ll a,b,c;
    cin>>c>>a>>b;
    if((a>=c && b>=c) || (a!=0 && a%c==0) || (b!=0 && b%c==0)) cout<<ll(a/c)+ll(b/c);
    else cout<<-1;
    return 0;
}