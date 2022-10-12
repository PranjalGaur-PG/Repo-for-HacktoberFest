#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

void print(vector<pair<int,int>> v) {
    for(auto it : v) {
        cout<<it.first<<" "<<it.second<<endl;
    }
}

bool solve(pair<int,int> a,pair<int,int> b) {

    if(a.first!=b.first) return a.first<b.first;
    else return b.second>a.second;
}

int main()
{
    IOS;
    vector<pair<int,int>> v;
    v.push_back({1,4});
    v.push_back({1,2});
    v.push_back({2,4});
    v.push_back({2,6});
    v.push_back({5,4});
    v.push_back({7,4});
    sort(v.begin(),v.end(),solve);
    print(v);
    return 0;
}