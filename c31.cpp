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
        int n,c,i=1,x=0,f=0;
        cin>>n;
        for(i=n*4;n;n--,i-=2) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}