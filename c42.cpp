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
    int n,i;
    cin>>n;
    ll a[n],l,num=0;
    for(i=0;i<n;i++) cin>>a[i];
    num=l=a[n-1];
    for(i=n-2;i>=0;i--) {
        if(a[i]<l) {
            num+=a[i]; l=a[i];
        }
        else {
            num+= (l-1); l--;
        }
        if(a[i]==1 || l==0) break;
    }
    cout<<num;
    return 0;
}