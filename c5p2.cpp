#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

void dfs(string s, int& ans, int ind, int cnt, int n, vector<bool>& vis) {
    if(ind <0 || ind>=n || vis[ind]) return;

    if(ind == n-1) {
        ans = cnt;
        return;
    }

    vis[ind] = true;

    if(s[ind] == 'A') dfs(s, ans, ind+2, cnt+1, n, vis);
    if(s[ind] == 'B') dfs(s, ans, ind-1, cnt+1, n, vis);
}

int fun(string s) {
    int n = s.size();

    vector<bool> vis(n, false);
    int ans = -1;
    dfs(s, ans, 0, 0, n, vis);
    return ans;
}

int main()
{
  IOS;
  string s;
  cin>>s;
  cout<<fun(s);
  return 0;
}