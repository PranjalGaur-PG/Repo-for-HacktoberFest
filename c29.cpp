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
        int n,i,c=0,j;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(i=1;i<n-1;i++) {
            j = abs(a[0]-a[n-1]) + abs(a[0]-a[i]) + abs(a[n-1]-a[i]);
            if(c < j) c=j;
        }
        cout<<j<<endl;
    }
    return 0;
}