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
        ll n,i,x,m=0;
        cin>>n;
        for(i=0;i<n;i++) {
            cin>>x;
            m+=x;
        }
        m/=2; m--;
        for(i=0;i<n;i++) cout<<m<<" ";
        cout<<endl;
    }
    return 0;
}