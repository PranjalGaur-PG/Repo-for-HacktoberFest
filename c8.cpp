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
        int i,j, n;
        cin>>n;
        for(i=1;i<=n;i++) {
            if(i==n) cout<<1<<" ";
            else cout<<i+1<<" ";
        }
        cout<<endl;
    }
	return 0;
}
