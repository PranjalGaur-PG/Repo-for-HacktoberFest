#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

void fun(int n) {
    int i,j,k;
    for(i=0;i<=n;i++) {
        for(j=0;j<= (n-i*3);j++) {
            for(k=0;k<= (n-(i*3)-(j*5));k++) {
                if(n== (i*3)+(j*5)+(k*7)) {
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    return;
                }
            }
        }
    }
    cout<<-1<<endl; return;
}

int main()
{
    IOS;
    int n;
    test(t) {
        cin>>n;
        fun(n);
    }
    return 0;
}