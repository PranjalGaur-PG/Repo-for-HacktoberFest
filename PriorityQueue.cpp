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
    int n,k;
    cin>>n>>k;
    int a[n],i;
    for(i=0;i<n;i++) cin>>a[i];
    i=0;
    priority_queue<int> p;  // k'th smallest .. MAX HEAP
    priority_queue<int, vector<int>, greater<int>> q;   // k'th largest .. MIN HEAP
    while(i<n) {
        p.push(a[i]);
        if(p.size() > k) p.pop();
        q.push(a[i]);
        if(q.size() > k) q.pop();
        i++;
    }
    cout<<p.top()<<"  "<<q.top();
    return 0;
}