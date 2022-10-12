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
    ll n,v,i,x,c=2;
    cin>>n>>v;
    if(n>v) x=v;
    else if(v>=n) x=n-1;
    for(i=1;i<=n-1-v;i++) {
        x+=c;
        c+=1;
    }
    cout<<x;
    return 0;
}