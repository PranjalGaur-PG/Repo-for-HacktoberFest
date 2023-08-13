#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int distinctPrimeFactors(int N)
{
    if (N == 1) {
        return 0;
    }
    if (N == 2) {
        return 1;
    }

    unordered_map<int, bool> visited;
    int cnt = 0;
    for (int i = 2; i * i <= N; i++) {
        while (N % i == 0) {
            if (!visited[i]) {
                cnt++;
                visited[i] = 1;
            }
            N /= i;
        }
    }

    if (N > 2) cnt++;

    return cnt;
}

bool isSafe(int x, int y, int n, int m) {
    if(x<0 || x>=n || y<0 || y>=m) return false;
    return true;
}

void dfs(vector<vector<int>>& mat, vector<vector<int>>& value, int x, int y, int& desx, int& desy, int& p, bool& ans, vector<vector<bool>>& vis, int n, int m) {
    if(ans) return;
    if(x == desx && y == desy) {
        ans = true;
        return;
    }
    vis[x][y] = true;

    if(isSafe(x+1, y, n, m) && !vis[x+1][y] && mat[x+1][y] > 0) dfs(mat, value, x+1, y, desx, desy, p, ans, vis, n, m);
    if(isSafe(x-1, y, n, m) && !vis[x-1][y] && mat[x-1][y] > 0) dfs(mat, value, x+1, y, desx, desy, p, ans, vis, n, m);
    if(isSafe(x, y+1, n, m) && !vis[x][y+1] && mat[x][y+1] > 0) dfs(mat, value, x+1, y, desx, desy, p, ans, vis, n, m);
    if(isSafe(x, y-1, n, m) && !vis[x][y-1] && mat[x][y-1] > 0) dfs(mat, value, x+1, y, desx, desy, p, ans, vis, n, m);
}

int main()
{
  IOS;
  int n, m, q;
  cin>>n>>m>>q;

  vector<vector<int>> mat(n, vector<int> (m));
  for(int i=0;i<n;i++) {
    for(int j=0;j<m;j++) {
        cin>>mat[i][j];
    }
  }

  vector<vector<int>> value(n, vector<int> (m));
  for(int i=0;i<n;i++) {
    for(int j=0;j<m;j++) {
        if(mat[i][j] == -1 || mat[i][j] == 0 || mat[i][j] == 1) value[i][j] = 0;
        else value[i][j] = distinctPrimeFactors(mat[i][j]); 
    }
  }

  while(q--) {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    vector<vector<bool>> vis(n, vector<bool> (m, false));
    bool ans = false;
    dfs(mat, value, a, b, c, d, e, ans, vis, n, m);
    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  return 0;
}