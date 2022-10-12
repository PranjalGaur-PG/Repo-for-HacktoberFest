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
    int t,i,j,c=0,s=0,n,r;
    cin>>n>>t;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    unordered_map<int,int> m;
    m.insert({0,1});
    for(i=0;i<n;i++) {
        s += a[i];
        if(m.find(s-t)!=m.end() || (s-t)==0) {
            c += m[s-t];
        }
        m[s]++;
    }
    cout<<c;
    return 0;
}