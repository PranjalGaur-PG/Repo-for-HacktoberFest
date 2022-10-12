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
        int i,j,k,n,q,v;
        string s;
        cin>>n>>q>>s;
        for(i=0;i<n;i++) {
            int a,b,c=0,d,e;
            cin>>a>>b;
            v=a-b+1;
            for(j=0;j<n;j++) {
                if(c==(n-2)) break;
                if(s[j]==s[a+c]) c++;
            }
            for(j=n-1;j>=0;j--) {
                if(s[j]==s[b-1]) {

                    
                }
            }
        }
    }
    return 0;
}