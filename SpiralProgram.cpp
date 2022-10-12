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
    int i,j,k,x,y,c=1,n;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++) for(j=0;j<n;j++) a[i][j]=c++;
    // memset(a,0,sizeof(a));
    // for(i=0;i<n;i++) {
    //     for(j=0;j<n;j++) cout<<a[i][j]<<"";
    //     cout<<endl<<" ";
    // }
    vector<int> ans;
    for(i=0;i<(n+1)/2;i++) {
        for(j=i;j<n-i;j++) ans.push_back(a[i][j]);
        for(j=i+1;j<n-i;j++) ans.push_back(a[j][n-i-1]);
        for(j=n-i-2;j>=i;j--) ans.push_back(a[n-i-1][j]);
        for(j=n-i-2;j>i;j--) ans.push_back(a[j][i]); 
    }
    // for(i=0;i<n;i++) {
    //     for(j=0;j<n;j++) cout<<((a[i][j]<10)?" ":"")<<a[i][j]<<" ";
    //     cout<<endl;
    // }
    for(i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    return 0;
}