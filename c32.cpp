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
        int n,s=0,f,i;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i]; s+=a[i]; 
        }
        if(s%2 == 0) {
            cout<<n<<endl;
            for(int i=0;i<n;i++) cout<<i+1<<" ";
        }
        else if(n==1) cout<<"-1";
        else {
            for(i=0;i<n;i++) {
                if(a[i]%2!=0) {
                    f=i+1; break;
                }
            }
            cout<<n-1<<endl;
            for(i=1;i<=n;i++) {
                if(i==f) continue;
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}