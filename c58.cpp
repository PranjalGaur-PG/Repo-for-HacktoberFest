#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

string freqAlphabets(string s) {
        int i,j,c=0,n=s.size();
        string a="",al="abcdefghi";
        for(i=n-1;i>=0;i--) {
            string b; int l;
            if(s[i]=='#') {
                b.push_back(s[i-2]); b.push_back(s[i-1]);
                l=stoi(b);
                a+=char(l+96);
                i-=2;
            }
            else {
                b.push_back(s[i]);
                l=stoi(b);
                a+=char(l+96);
            }
        }
        reverse(a.begin(),a.end());
        return a;
    }

int main()
{
    IOS;
    string s,a;
    cin>>s;
    a=freqAlphabets(s);
    cout<<a;
    return 0;
}