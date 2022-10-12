#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int fac(int n) {
    if(n==1) return 1;
    else return n*fac(n-1);
}

int fun(string s,int ind,int sum=0) {
    if(ind==s.length()) return sum;
    int i,c=0;
    // for(i=ind;i<s.length();i++) cout<<s[i];
    // cout<<endl;
    for(i=ind+1;i<s.length();i++) if(s[ind]>=s[i]) c++;
    sum+= c*fac(s.length()-ind-1);
    return fun(s,ind+1,sum);
}

int main()
{
    IOS;
    string s;
    cin>>s;
    int l=s.length();
    int r=fun(s,0);
    cout<<++r;
    return 0;
}