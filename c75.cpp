#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

    string countAndSay(int n) {
        if(n==1) return "1";
        
        string s = countAndSay(n-1),ans="";
        int l=s.size(),i,j,f=0;
        char la = s[0];
        for(i=0;i<l;i++) {
            if(s[i]==la) f++;
            else {
                ans += to_string(f);
                ans += la;
                la = s[i];
                f=1;
            }
        }
        ans += to_string(f);
        ans += la;

        return ans;
    }


int main()
{
    IOS;
    int n;
    cin>>n;
    string s = countAndSay(n);
    cout<<s;
    return 0;
}