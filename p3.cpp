#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
#define rep(i,a,b) for(i=a;i<b;i++)
#define ll long long
#define ull unsigned long long
#define test(t) int t; cin>>t; while(t--)

int main() {
	IOS;
	test(t) {
        string s;
        cin>>s;
        int l=s.length();
        int i,sm=0,a=0,b=0;
        for(i=0;i<l;i++) {
            if(s[i]=='(') a++;
            else if(s[i]==')') {
                if(a>0) {
                    sm++; a--;
                }
            }
            if(s[i]=='[') b++;
            else if(s[i]==']') {
                if(b>0) {
                    sm++; b--;
                }
            }
        }
        cout<<sm<<endl;
    }
	return 0;
}