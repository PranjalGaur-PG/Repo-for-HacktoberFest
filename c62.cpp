#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int findMissing(int a[], int n) { 
        int i,j=0;
        for(i=0;i<n;i++) {
            if(a[i]<=0) {
                swap(a[i],a[j]); j++;
            }
        }

        sort(a+j,a+n);
        for(i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
        for(i=j;i<n;i++) {
            if(a[i]!=(i-j+1)) return (i-j+1);
        }
        return (n+1);
    }

int main()
{
    IOS;
    int n,x,i,j;
    cin>>n;
    int a[n];
    rep(i,0,n) cin>>a[i];
    cout<<findMissing(a,n);
    return 0;
}