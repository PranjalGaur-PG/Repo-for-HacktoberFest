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
        ll n,i,j,k=0,l=0,x;
        cin>>n;
        vector<long long> b;
        ll ar1[n+1],ar2[n];
        for(i=0;i<=n;i++) ar1[i]=0;
        for(i=0;i<n;i++) {
            cin>>x;
            ar2[i]=x;
            ar1[x]++;
        }
        for(i=1;i<=n;i++) {
            if(ar1[i]>k) {
                if(ar1[i]!=1) k=i;
            }
        }
        if(k==0) {
            cout<<1<<endl; continue;
        }
        for(i=0;i<n;i++) {
            if(ar2[i]==k) b.push_back(i);
        }
        for(i=0;i<b.size();i++) {
            if(b[i+1]-b[i]>1 && i+1<b.size()) l++;
        }
        cout<<l<<endl;
    }
    return 0;
}