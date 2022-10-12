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
    // test(t) {
        string s;
        cin>>s;
        unordered_map <char,int> m;
        int i=0,j=0,ans=0;
        while(i<s.length()) {
            if(m[s[i]] == 0) {
                m[s[i]]++; i++;
            }
            else {
                m[s[j]]--; j++;
            }
            ans = max(ans,(i-j));
        }
        cout<<ans<<endl;
    // }
    return 0;
}