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
    int n,i,j;
    cin>>n; n*=2;
    for (i = 1; i <= n; i++) { 
        cout<<"\"";
        for (j = 1; j <= n; j++)  { 
            if (j == i ) cout << "\\";
            else if( j == (n + 1 - i) )  cout<<"/";
            else cout << " "; 
        } 
        for (j = 1; j <= n; j++)  { 
            if (j == i ) cout << "\\";
            else if( j == (n + 1 - i) )  cout<<"/";
            else cout << " "; 
        } 
        cout<<"\""<<endl; 
    } 
    return 0;
}