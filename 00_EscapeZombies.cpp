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
    int n,m;
    cin>>n>>m;

    vector<vector<int>> a(n, vector<int> (m));
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j];
    int x,y;

    vector<vector<int>> a2(n, vector<int> (m, INT_MAX));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(a[i][j]==0) x=i, y=j;
            if(i==0 || i==n-1 || j==0 || j==m-1) a2[i][j] = a[i][j];
        }
    }

    for(int i=1;i<n-1;i++) {
        for(int j=1;j<m-1;j++) {
            if(x == i && y == j) continue;
            a2[i][j] = a[i][j] + min({ a2[i-1][j], a2[i-1][j-1], a2[i][j-1], a2[i+1][j+1], a2[i+1][j], a2[i][j+1], a2[i+1][j-1], a2[i-1][j+1] });
            
        }
        // cout<<endl;
    }
    // for(int i=0;i<n;i++) {
    //     for(int j=0;j<m;j++) {
    //         cout<<a2[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    if(x==0 || x==n-1 || y==0 || y==m-1) cout<<0;
    else cout<<min({ a2[x-1][y], a2[x-1][y-1], a2[x][y-1], a2[x+1][y+1], a2[x+1][y], a2[x][y+1], a2[x+1][y-1], a2[x-1][y+1] });

    return 0;
}