#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

    string pushDominoes(string s) {
        int n=s.size(), i,j,k;
        vector<int> r(n,0), l(n,0);
        for(i=1;i<n;i++) {
            if(s[i]=='L') r[i]=0;
            else if(s[i-1]=='R' || (s[i-1]=='.' && r[i-1]>0)) r[i] = r[i-1]+1;
        }
        for(i=n-2;i>=0;i--) {
            if(s[i]=='R') l[i]=0;
            else if(s[i+1]=='L' || (s[i+1]=='.' && l[i+1]>0)) l[i] = l[i+1]+1;
        }
        for(i=0;i<n;i++) cout<<r[i]<<" ";
        cout<<endl;
        for(i=0;i<n;i++) cout<<l[i]<<" ";
        for(i=0;i<n;i++) {
            if(r[i]==0 && l[i]==0) continue;
            if(r[i]==0 && l[i]!=0) s[i]='L';
            else if(l[i]==0 && r[i]!=0) s[i]='R';
            else if(r[i]<l[i]) s[i]='R';
            else if(r[i]>l[i]) s[i]='L';
        }
        return s;
    }


int main()
{
    IOS;
    string s;
    cin>>s;
    string ans = pushDominoes(s);
    cout<<ans;
    return 0;
}