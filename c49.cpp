#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

bool fun(vector<int> a,int l,int r,int x) {
    int i,j,k,c=0;
    for(i=l;i<=r;i++) if(a[i]<a[x]) c++;
    // cout<<c<<" "<<x<<" ";
    if(l+c==x) return true;
    return false;
}

int main()
{
    IOS;
    int n,m,i,j,l,r,x;
    cin>>n>>m;
    vector<int> a;
    for(i=0;i<n;i++) {
        cin>>x;
        a.push_back(x);
    }
    for(i=0;i<m;i++) {
        cin>>l>>r>>x;
        if(fun(a,l-1,r-1,x-1)) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}