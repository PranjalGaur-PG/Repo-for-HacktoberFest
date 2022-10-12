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
       int n,i,x,j,k,n1=0,n2=0;
       cin>>n;
       int a[101];
       //for(i=0;i<=n;i++) a[i]=0;
       memset(a,0,(n+1)*sizeof(a[0]));
       for(i=1;i<=n;i++) {
           cin>>x; a[x]++;
       }
       for(i=0;i<=n;i++) {
           if(a[i]==0) {
               n1=i; break;
           }
       }
       for(i=0;i<=n;i++) {
           if(a[i]<=1) {
               n2=i; break;
           }
       }
       cout<<n1+n2<<endl;
    }
    return 0;
}