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
        ll n,m,i,j,k,l;
        cin>>n>>m;
        ll a[n][m];
        for(i=0;i<n;i++) for(j=0;j<m;j++) cin>>a[i][j];
        for(i=0;i<n;i++) for(j=0;j<m;j++) {
            if(a[i][j]==a[i-1][j] && i-1>=0) a[i][j]++;
            if(a[i][j]==a[i+1][j] && i+1<n) a[i][j]++;
            if(a[i][j]==a[i][j-1] && j-1>=0) a[i][j]++;
            if(a[i][j]==a[i][j+1] && j+1<m) a[i][j]++;
        }
        for(i=0;i<n;i++) {
            for(j=0;j<m;j++) cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
}