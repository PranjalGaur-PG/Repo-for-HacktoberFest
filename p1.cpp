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
		ll n,k,i,j,c,p,s=0,N;
		cin>>n>>k;
		ll a[n*k];
		for(i=0;i<n*k;i++) {
			cin>>a[i];
		}
		N=k; 
		p=(n/2)+1;
		for(i=n*k-1,c=1;i>=0 && N>0;i--,c++) {
			if(c%p==0) {
				s+=a[i]; N--;
			}
		}
		cout<<s<<endl;
	}
	return 0;
}