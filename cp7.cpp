#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

void fun(int n,vector<int> &v,vector<vector<int>> &full,int &ans) {
    int sz = v.size();
    if(sz==n) {
        int t=0;
        for(int i=1;i<n-1;i++) {
            if((v[i]>v[i-1] && v[i]>v[i+1]) || (v[i]<v[i-1] && v[i]<v[i+1])) t++; 
        }
        ans += t;
        return;
    }
    
    v.push_back(0);
    fun(n,v,full,ans);
    v.pop_back();

    v.push_back(1);
    fun(n,v,full,ans);
    v.pop_back();

    v.push_back(2);
    fun(n,v,full,ans);
    v.pop_back();

}

int main()
{
    IOS;
    test(t) {
        int n;
        cin>>n;
        vector<vector<int>> full;
        vector<int> v;
        int ans=0;

        fun(n,v,full,ans);

        cout<<ans<<endl;
    }
    return 0;
}