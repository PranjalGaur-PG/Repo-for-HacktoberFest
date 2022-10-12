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
        string s;
        cin>>s;
        int i,j,x=INT_MIN,n=s.length(),ans=0;
        for(i=1;i<n;i++) {
            if(s[i] != s[i-1]) ans++;
        }
        

        cout<<ans<<endl;
    }
    return 0;
}