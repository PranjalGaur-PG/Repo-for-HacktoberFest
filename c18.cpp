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
        int n,k,i,j;
        cin>>n>>k;
        string s="abc";
        for(i=0;i<k;i++) cout<<"a";
        for(i=1;i<=(n-k);i++) cout<<s[i%3];
        cout<<endl;
    }
    return 0;
}