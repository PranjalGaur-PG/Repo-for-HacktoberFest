#include <bits/stdc++.h>
using namespace std;

void dfs(int s, vector<vector<int> > g, vector<int>& v) {
    for (auto i : g[s]) {
        
        if (!v[i]) {
            v[i] = 1;
            
            dfs(i, g, v);
        }
    }
}

int deleteEdges(int n, int m, int a, int b, vector<vector<int> > edges) {

    vector<vector<int> > g(n, vector<int>());
    for (int i = 0; i < m; i++) {
        g[edges[i][0] - 1].push_back(edges[i][1] - 1);
    }

    vector<int> v(n, 0);
    v[a - 1] = 1;

    dfs(a - 1, g, v);
    int cnt = 0;

    for (int i = 0; i < n; i++) {

        if (v[i] == 0)
            continue;
        for (int j = 0; j < g[i].size(); j++) {

            if (g[i][j] == b - 1) {
                cnt++;
            }
        }
    }
    
    return cnt;
}

int main()
{
    int N = 6;
    int M = 7;
    int A = 1;
    int B = 6;
    vector<vector<int> > edges{
        { 1, 2 }, { 5, 2 }, { 2, 4 },
        { 2, 3 }, { 3, 6 }, { 4, 6 }, { 5, 6 }
    };
 
    cout << deleteEdges(N, M, A, B, edges);
 
    return 0;
}