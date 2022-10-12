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
        string s,ch="";
        int n,a,b,c,i,j,k,x=0,y=0;
        cin>>n>>a>>b>>c>>s;
        for(i=0;i<n;i++) {
            if(s[i]=='R') {
                if(b>0) {
                    b--; ch.push_back('P'); y++;
                }
                else {
                    ch.push_back('_');
                }
            }
            else if(s[i]=='P') {
                if(c>0) {
                    c--; ch.push_back('S'); y++;
                }
                else {
                    ch.push_back('_');
                }
            }
            else  {
                if(a>0) {
                    a--; ch.push_back('R'); y++;
                }
                else {
                    ch.push_back('_');
                }
            }
            // cout<<ch<<" ";
        }
        // cout<<endl;
        if(y >= (n+1)/2) {
            cout<<"Yes\n";
            for(i=0;i<n;i++) {
                if(ch[i]=='_') {
                    if(a>0) {
                        a--; ch[i]='R';
                    }
                    else if(b>0) {
                        b--; ch[i]='P';
                    }
                    else if(c>0) {
                        c--; ch[i]='S';
                    }
                }
            }
            cout<<ch<<endl;
        }
        else cout<<"No\n";
    }
    return 0;
}