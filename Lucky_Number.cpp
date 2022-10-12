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
        int a,b,c;
        cin>>a>>b>>c;
        if(a==7 || b==7 || c==7) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}