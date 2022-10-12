#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

bool fun(string s,string sc) {
    int i,j,k,l,l1,n;
    int a[26],b[26];
    for(i=0;i<26;i++) { a[i]=0; b[i]=0; }
    l=s.length(); l1=sc.length();
    for(i=0;i<l1;i++) a[sc[i]-65]++;
    for(i=0;i<l;i++) b[s[i]-65]++;
    for(i=l1;i<l;i++) {
        cout<<s[i]<<endl;
        for(j=0;j<26;j++) if(a[j]!=b[j]) return false;
        b[s[i-l1]]--; b[s[l1]]++;
    }
    return true;
}

int main()
{
    IOS;
    string s,sc;
    int i,j,k,l,l1,n; 
    // cout<<"Enter string and substring"<<endl;
    cin>>s>>sc;
    if(fun(s,sc)) cout<<"YES";
    else cout<<"NO";
    return 0;
}