#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
#define rep(i,a,b) for(i=a;i<b;i++)
#define ll long long
#define ull unsigned long long
#define test(t) int t; cin>>t; while(t--)

int main() {
	IOS;
	test(t) {
        int a,b,n,x,y,s=0;
        cin>>x>>y;
        if(x==y || x+1==y ||y+1==x) cout<<x+y<<endl;
        else {
            n=max(x,y);
            s=(n*2)-1;
            cout<<s<<endl;
        }
    }
	return 0;
}