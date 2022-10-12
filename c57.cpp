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
    int n,s=0,c=0,i,j,np=0,nn=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++) {
        cin>>a[i];
        b[i]=a[i]/2; 
        s+= b[i];
    }
    for(i=0;i<n;i++) {
        if(s!=0 && a[i]%2!=0) {
            if(a[i]>0 && s<0) { b[i]++; s++; }
            if(a[i]<0 && s>0) { b[i]--; s--; }
        }
    }
    for(i=0;i<n;i++) cout<<b[i]<<endl;
    return 0;
}