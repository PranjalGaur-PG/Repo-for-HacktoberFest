#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int fun(vector<string> s, string c,int i,int j,int ind) {
    
    int cnt=0,n=s.size(),m=s[0].size(),x=c.size();
    

    if(i>=0 && i<n && j>=0 && j<m && s[i][j]==c[ind]) {
        char t = s[i][j];
        s[i][j] = '#';
        ind++;
        if(ind == x) cnt = 1;
        else {
            cnt += fun(s,c,i+1,j,ind);
            cnt += fun(s,c,i-1,j,ind);
            cnt += fun(s,c,i,j+1,ind);
            cnt += fun(s,c,i,j-1,ind);
        }
        
        s[i][j] = t;
    }
    return cnt;
}

int count(vector<string> s, string c) {
    int n=s.size(),m=s[0].size(),x=c.size(),i,j,cnt=0;

    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            cnt += fun(s,c,i,j,0);
        }
    }

    return cnt;
}

int main()
{
    IOS;
    int n,m,i,j;
    cin>>n>>m;
    vector<string> s(n);
    for(i=0;i<n;i++) cin>>s[i];
    string c;
    cin>>c;
    cout<<count(s,c);
    return 0;
}