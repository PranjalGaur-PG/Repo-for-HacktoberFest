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
        ll n;
        cin>>n;
        ll i,j,a[n],sf=0,s=0,m1=-1,m2=-1;
        for(i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]>m1) m1=a[i];
        }
        for(i=0;i<n;i++) {
            for(j=0;j<n;j++) {
                if(i!=j) {
                    s+= m1-a[j]-a[i];
                }
            }
            sf=max(s,sf);
        }
        cout<<sf<<endl;
    }
	return 0;
}