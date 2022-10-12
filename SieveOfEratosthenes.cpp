#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int Sieve(int n) {
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    int c=0,i,j,k;
    for(i=2;i*i<=n;i++) {
        if(prime[i]==true) {
            for(j=i*i;j<=n;j+=i) prime[j]=false;
        }
    }
    for(i=2;i<=n;i++) {
        if(prime[i]) {
            cout<<i<<" "; c++;
        }
    }
    return c;
}


// int Sieve(int n)
// {
//     bool prime[n + 1];
//     memset(prime, true, sizeof(prime));
//     int c=0;
//     for (int p = 2; p * p <= n; p++) {
//         if (prime[p] == true) {
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }
//     for (int p = 2; p <= n; p++)
//         if (prime[p]) {
//             cout << p << " "; c++;
//         }
//     return c;
// }

int main()
{
    IOS;
    int n;
    cin>>n;
    int c=Sieve(n);
    cout<<endl<<c;
}