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
        int cnt=0,x,i;
        for(i=0;i<5;i++) {
            cin>>x;
            if(x==1) cnt++;
            if(x==2) cnt--;
        } 
        if(cnt == 0) cout<<"DRAW"<<endl;
        else if(cnt > 0) cout<<"INDIA"<<endl;
        else cout<<"ENGLAND"<<endl;
    }
    return 0;
}