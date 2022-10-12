#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

bool solve(ll n, ll a, ll b) {
    if(b==1 || (a==1 && ((n-1)%b==0))) return true;
    priority_queue<ll, vector<ll>, greater<ll>> pq;

    pq.push(1);
    while(pq.top()<=n) {
        ll x = pq.top();
        if(x == n) return true;
        pq.pop();
        cout<<x<<" ";
        ll v = x*a;
        if(v==n) return true;
        v = x+b;
        if(v==n) return true;
        pq.push(x*a);
        pq.push(x+b);
    }
    return false;
}

int main()
{
    IOS;
    test(t) {
        ll n,a,b,i,j;
        cin>>n>>a>>b;
        
        if(solve(a,b,n)) cout<<"\nYES\n";
        else cout<<"\nNO\n";
    }
    return 0;
}