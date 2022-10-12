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
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    stack<int> s;  vector<int> v;
    for(i=n-1;i>=0;i--) {
        //  My Code - 
        while(s.size()!=0 && s.top()<=a[i]) s.pop();
        if(s.empty()) v.push_back(-1);
        else v.push_back(s.top());
        s.push(a[i]);


        // Code from Youtube Video. Link - "https://www.youtube.com/watch?v=NXOOYYwpbg4&list=PL_z_8CaSLPWdeOezg68SKkeLN4-T_jNHd&index=3"
        // cout<<a[i]<<" ";
        // if(s.size()!=0) cout<<s.top()<<" "<<endl;
        // if(s.size()==0) v.push_back(-1);
        // else if(s.size()>0 && s.top()>a[i]) v.push_back(s.top());
        // else if(s.size()>0 && s.top()<=a[i]) {
        //     while(s.size()>0 && s.top()<=a[i]) s.pop(); 
        //     if(s.size()==0) v.push_back(-1);
        //     else v.push_back(s.top());
        // }
        // s.push(a[i]);

    }
    reverse(v.begin(),v.end());
    for(i=0;i<v.size();i++) cout<<v[i]<<" ";
    return 0;
}