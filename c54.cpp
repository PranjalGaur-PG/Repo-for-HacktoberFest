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
        ll n,k,cnt=0,i,j=1;
        cin>>n>>k;
        while(cnt<k) {
            cnt+=j;
            j++;
        }
        j--; cnt-=j; k-=cnt;
        for(i=1;i<=n;i++) {
            if(i == n-k+1) cout<<'b';
            else if(i == n-j) cout<<'b';
            else cout<<'a';
        }
        cout<<endl;
    }
    return 0;
}