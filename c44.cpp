#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

double termOfGP(int A,int B,int N)
{
    double ans,c,d;
    c=d=double(B)/A;
    // for(ll i=0;i<N-1;i++) {
    //     d*=c;
    // }
    ans = double(A)* pow(c,N-1);
    return ans;
}


int main()
{
    IOS;
    int a,b,n;
    cin>>a>>b>>n;
    cout<<floor(termOfGP(a,b,n));
    return 0;
}