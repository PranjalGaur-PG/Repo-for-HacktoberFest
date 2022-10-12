#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)
#define MAX 1000

int MAH(vector<int> m, int n) {
        stack<pair<int,int>> sl,sr;
        vector<int> vl,vr;
        int i,ans=0;
        for(i=0;i<n;i++) {
            while(sl.size()!=0 || sl.top().first>=m[i]) sl.pop();
            if(sl.size()!=0) vl.push_back(sl.top().second);
            else vl.push_back(-1);
            sl.push({m[i],i});
        }
        
        for(i=n-1;i>=0;i--) {
            while(sr.size()!=0 || sr.top().first>=m[i]) sr.pop();
            if(sr.size()!=0) vr.push_back(sr.top().second);
            else vr.push_back(n);
            sr.push({m[i],i});
        }
        reverse(vr.begin(),vr.end());
        
        for(i=0;i<n;i++) ans = max(ans, (vr[i]-vl[i]-1)*m[i]);
        return ans;
    } 
    
    int maxArea(int m[MAX][MAX], int r, int c) {
        // Your code here
        int i,j,ans=0;
        for(i=1;i<r;i++) {
            for(j=0;j<c;j++) {
                if(m[i][j] != 0) m[i][j] += m[i-1][j];
            }
        }
        
        for(i=0;i<r;i++) {
            vector<int> v;
            for(j=0;j<c;j++) v.push_back(m[i][j]);
            ans = max(ans , MAH(v,c));
        }
        return ans;
    }

int main()
{
    IOS;
    int n,m;
    int a[MAX][MAX];
    cin>>n>>m;
    cout<<1<<endl;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>> a[i][j];
    cout<<endl<<maxArea(a,n,m);
    return 0; 
}