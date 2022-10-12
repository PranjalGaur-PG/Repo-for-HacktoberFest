#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int exactly3Divisors(int N)
    {
        //Your code here
        bool prime[N+1];
        ll i,j,c=0;
        memset(prime, true, sizeof(prime));
        for(i=2;i*i<=N;i++) {
            if(prime[i]==true) {
                for(j=i*i; j<N; j+=i) prime[j]=false;
            }
        }
        for(i=2;i*i<=N;i++) if(prime[i]==true) c++;
        return int(c);
    }

int main()
{
    IOS;
    cout<<exactly3Divisors(10);
    return 0;
}