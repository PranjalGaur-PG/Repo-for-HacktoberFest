#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

bool fun(int x,int y, int a[],int b[],int k,int n) {
    int i;
    for(i=0;i<n;i++) {
        if(abs(x-a[i])+abs(y-b[i])>k) return false;
    }
    return true;
}

int main()
{
    IOS;
    test(t) {
        int i,j,k,l,n,f=0;
        cin>>n>>k;
        int a[n],b[n];
        for(i=0;i<n;i++) cin>>a[i]>>b[i];
        for(i=0;i<n;i++) {
            if(fun(a[i],b[i],a,b,k,n)) f=1;
        }
        if(f==1) cout<<1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}