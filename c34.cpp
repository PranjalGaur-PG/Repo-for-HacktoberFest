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
        int n,x,i,j,k=0;
        cin>>n>>x;
        int a[n],b[n],c[n];
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++) cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        for(i=0;i<n;i++) c[i] = b[n-i-1];
        for(i=0;i<n;i++) if(a[i]+c[i]>x) k=1;
        if(k==1) cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}