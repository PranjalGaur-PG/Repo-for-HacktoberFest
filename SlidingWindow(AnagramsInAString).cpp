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
    int i,j,count=0,k,n,m,dis=0;
    string s,c;
    unordered_map<char,int> mp;
    cin>>s>>c;
    n = s.size(); m = c.size();
    for(i=0;i<m;i++) {
        mp[c[i]]++;
        // if(mp[c[i]]==1) dis++; 
    }
    dis = mp.size();
    unordered_map<char,int> :: iterator it;
    // cout<<dis<<endl;
    // for(it=mp.begin();it!=mp.end();it++) cout<<it->first<<" "<<it->second<<endl;
    // cout<<"---------------------------"<<endl;
    vector<int> v;
    i=0; j=0;
    while(j<n) {
        // cout<<s[j]<<" "<<j<<" "<<s[i]<<" "<<i<<" ";
        if(mp.find(s[j])!=mp.end()) {
            mp[s[j]]--;
            if(mp[s[j]]==0) dis--;
        }
        if(dis == 0) count++;
        if(dis == 0) v.push_back(i);
        if(j-i+1<m) j++;
        else {
            if(mp.find(s[i])!=mp.end()) {
                if(mp[s[i]]==0) dis++;
                mp[s[i]]++;
            }
            i++; j++;
            // if(mp.find(s[j])!=mp.end())
        }
        // cout<<dis<<endl;
    }
    // cout<<"---------------------------"<<endl;
    cout<<"Count of anagrams is - "<<count<<endl<<"And they are present at Indices -"<<endl;
    for(i=0;i,i<v.size();i++) cout<<v[i]<<' ';
    return 0;
}