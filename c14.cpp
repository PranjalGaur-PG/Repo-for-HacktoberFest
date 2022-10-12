#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int fun(int a[],int m,int l,int r) {
    
    int mid=(l+r)/2;
    cout<<a[mid]<<endl;
    if(l>r) return -1;
    if(a[mid]==m) return mid;
    else if(m>a[mid]) return fun(a,m,mid+1,r);
    else return fun(a,m,l,mid-1);
}

int main()
{
    IOS;
    int i,j,k,l,n,m;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    cin>>m;
    sort(a,a+n);
    for(i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    int x= fun(a,m,0,n-1);
    if(x==-1) cout<<"Not found";
    else cout<<"Position is "<<x+1;
    return 0;
}