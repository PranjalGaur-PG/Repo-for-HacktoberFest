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
    int n,m,i,j,k,l,p,c,cnt=0;
    string a,b;
    cin>>n>>m>>a>>b;
    vector<int> fb(m,0),bc(m,0);
    c=0;
    for(i=0;i<n;i++) {
        if(a[i]==b[c]) fb[c++]=i;
        if(c==(m)) break;
    }
    c=m-1;
    for(i=n-1;i>=0;i--) {
        if(a[i]==b[c]) bc[c--]=i;
        if(c==-1) break;
    }
    // cout<<endl;
    // for(i=0;i<m;i++) cout<<fb[i]<<" ";
    // cout<<endl;
    // for(i=0;i<m;i++) cout<<bc[i]<<" ";
    // cout<<endl;
    for(i=0;i<m-1;i++) {
        cnt = max(cnt, max(abs(fb[i+1]-bc[i]), abs(fb[i]-bc[i+1]))) ;
    }
    cout<<cnt;
    return 0;
}