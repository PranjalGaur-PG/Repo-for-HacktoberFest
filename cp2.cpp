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
        int n,i,j;
        cin>>n;
        if(n%2 == 0) {
            for(i=0;i<n;i++) {
                for(j=0;j<n;j++) {
                    cout<<-1<<" ";
                }
                cout<<endl;
            }
        }
        else {
            for(i=0;i<n;i++) {
                for(j=0;j<n;j++) {
                    if(i==j) cout<<-1;
                    else cout<<1;
                    cout<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}