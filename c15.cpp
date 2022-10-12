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
        int i,n;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++) cin>>a[i];
        // cout<<a[1]<<" "<<a[0]<<" ";
        for(i=n-1;i>=0;i--) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}