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
    int x,y,z,a,b,c,i,j,k,f=0;
    cin>>x>>y>>z>>a>>b>>c;
    if(x>a) f=1;
    else a-=x;
    b+=a; a=0;
    if(y>b) f=1;
    else b-=y;
    if(z>a+b+c) f=1;
    if(f==1) cout<<"NO";
    else cout<<"YES";
    return 0;
}