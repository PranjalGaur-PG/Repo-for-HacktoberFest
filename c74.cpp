#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

string fun(string s,int n,int k) {
    int i,j,c=0,a,b,t=k, ch[n/2];
    memset(ch,0,sizeof(ch));

    for(i=0;i<n/2;i++) {
        if(s[i]!=s[n-i-1]) {
            c++; ch[i] = 1; 
        }
    }
    if(c>k) return "-1";

    for(i=0;i<n/2;i++) {
        if(ch[i]==1) {
            char m = s[i] > s[n-i-1] ? s[i] : s[n-i-1];
            s[i]=m; s[n-i-1]=m;
            t--;
        }
    }
    for(i=0;i<n/2;i++) {
        if(t>1 && ch[i]==0) {
            if(s[i]!='9') {
                s[i]='9'; s[n-i-1]='9'; 
                t-=2;
            }
        }
        else if(t>0 && ch[i]==1) {
            if(s[i]!='9') {
                s[i]='9'; s[n-i-1]='9'; 
                t--;
            }
        }
    }
    if(t>0 && s.size()%2==1) s[(n/2)] = '9';
    return s;
}

int main()
{
    IOS;
    int i,n,k;
    string s,t;
    cin>>n>>k>>s;
    t = fun(s,n,k);
    cout<<t;
    return 0;
}