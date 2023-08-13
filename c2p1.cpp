#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
#define test(t) int t; cin>>t; while(t--)

vector<int> bfs(vector<int> adj[], int ind) {
  vector<int> ans;

  vector<int> temp;
  queue<int> q;
  q.insert(ind);

  vector<bool> vis(n, false);

  while(q.size()) {
    int sz = q.size();

    while(sz--) {
      temp.erase();
      int f = q.front();
      q.pop();
      vis[f] = true;

      for(auto it : adj[f]) {
        if(!vis[it]) {
          q.insert(it);
          temp.push_back(it);
        }
      }
      ans = temp;
    }
  }

  return ans;
}

void traverse(int cty, int trp, vector<int>& vis, int& ans)

int main()
{
  IOS;
  test(t) {
    int n, q;
    cin>>n>>q;
    vector<int> adj[n];
    for(int i=0;i<n-1;i++) {
      int x, y;
      cin>>x>>y;
      adj[x-1].push_back(y-1);
      adj[y-1].push_back(x-1);
    }

    vector<int> dis[n];
    for(int i=0;i<n;i++) {
      vector<int> temp = bfs(adj, i);
      dis[i] = temp;
    }

    while(q--) {
      int cty, trp;
      cin>>cty>>trp;

      vector<int> vis(n, 0);
      int ans = 0;
      traverse(cty, trp, vis, ans);
      cout<<ans<<" ";
    }
    cout<<endl;
  }

  return 0;
}