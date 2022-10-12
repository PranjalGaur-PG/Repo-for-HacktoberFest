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
        int n,k,i,j,c=1,x,y;
        cin>>n>>k;
        vector<char> s(n,'a');
        for(i=2;;i++) {
            if(c>=k) break;
            c+=i;
        }
        s[i]='b';
        c-=i;
        x=k-c;
        s[x]='b';
        for(auto p : s) cout<<p;
        cout<<endl;
    }
    return 0;
}