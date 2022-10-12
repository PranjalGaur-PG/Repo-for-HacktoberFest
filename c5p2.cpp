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
    double i = 0.0, j = 1.0;
    string s;
    cin>>s;
    priority_queue<pair<double, int>, vector<pair<double, int>>, greater<pair<double, int>>> pq;
    // for(int x=0;x<s.size();x++) {
    //     double mid = (i+j)/2;
    //     pq.push({mid, x});
    //     if(s[x] == 'l') j = mid;
    //     else i = mid;
    // }


    // while(pq.size()) {
    //     cout<<pq.top().second+1<<endl;
    //     pq.pop(); 
    // }
    int n=s.length();
 
   for(int i=0;i<n;i++)
    {
        if(s[i]=='r')
        cout<<i+1<<'\n';
    }
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='l')
        cout<<i+1<<'\n';
    }
    return 0;
}