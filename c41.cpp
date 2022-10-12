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
    int n,k,c=0;
    cin>>n>>k;
    if(k>(n/2)) k = n-k+1;
    c+= (4*k);
    c+= (3*(n-k));
    cout<<c-1;
    return 0;
}