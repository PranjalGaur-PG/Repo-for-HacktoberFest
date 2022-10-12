#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

void fun(ll n,ll m,ll k) {
    ll i,j,c=0,x,y,f=0;
    x = min(n,m);
    y = max(n,m);
    for(i=0;i<x;i++) {
        if(f%2==0) {
            c = c ^ (f+k);
        }
        // cout<<f<<" ";
        f++;
        cout<<f<<" ";
        // if(i%2==0) {
        //     c = c ^ (k+i);
        // }
        // f++; 
    }
    for(i=0;i<y-x;i++) {
        if(x%2==1) {
            c = c ^ (k+f);
        }
        cout<<f<<" ";
        f++;
        //     c = c ^ (k+f);
        //     cout<<f<<" ";
        //     f++;
    }
    for(i=0;i<x-1;i++) {
        if(f%2==1) {
            c = c ^ (f+k);
        }
        cout<<f<<" ";
        f++;
        // if(i%2==0) {
        // c = c ^ (f+k); }
        // cout<<f<<" ";
        // f++;
    }
    cout<<endl<<c<<endl;
}

int main()
{
    IOS;
    test(t) {
        ll n,m,k;
        cin>>n>>m>>k;
        fun(n,m,k);
    }
    return 0;
}