#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

void sub(string s,int n,string ch="") {
    if(n==s.length()) {
        cout<<ch<<" ";
        return;
    }
    sub(s,n+1,ch);
    sub(s,n+1,ch+s[n]);
}

int main()
{
    IOS;
    string s;
    cout<<"Enter a string - ";
    cin>>s;
    sub(s,0);
    return 0;
}