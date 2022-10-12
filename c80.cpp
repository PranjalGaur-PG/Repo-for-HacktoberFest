#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

    void fun(vector<vector<char>> s, string c,int i,int j,int a,int b,int ind,vector<vector<int>>& ans) {

        int cnt=0,n=s.size(),m=s[0].size(),x=c.size();

        if(i>=0 && i<n && j>=0 && j<m && s[i][j]==c[ind]) {
            char t = s[i][j];
            s[i][j] = '#';
            ind++;
            if(ind == x) {
                vector<int> v;
                v.push_back(a);
                v.push_back(b);
                ans.push_back(v);
            }
            else {
                fun(s,c,i+1,j,a,b,ind,ans);
                fun(s,c,i-1,j,a,b,ind,ans);
                fun(s,c,i,j+1,a,b,ind,ans);
                fun(s,c,i,j-1,a,b,ind,ans);
            }
            s[i][j] = t;
        }
    }
    
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	    int n=grid.size(),m=grid[0].size(),i,j;
        vector<vector<int>> ans;
	    for(i=0;i<n;i++) {
	        for(j=0;j<m;j++) {
	            if(grid[i][j] == word[0]) {
	                fun(grid,word,i,j,i,j,0,ans);
	            }
	        }
	    }
	    return ans;
	}

int main()
{
    IOS;
    int n,m,i,j;
    cin>>n>>m;
    vector<vector<char>> g(n, vector<char> (m));
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) cin>>g[i][j];
    } 
    string w;
    cin>>w;
    vector<vector<int>> a;
    a = searchWord(g,w);
    for(i=0;i<a.size();i++) cout<<a[i][0]<<"  "<<a[i][1]<<endl;
    return 0;
}