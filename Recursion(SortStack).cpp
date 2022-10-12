#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

void Insert(stack<int> &s, int t) {
    if(s.size()==0 || s.top()>=t) { s.push(t); return; }
    int temp = s.top();
    s.pop();
    Insert(s,t);
    s.push(temp);
}

void Sort(stack<int>& s) {
    if(s.size() == 1) return ;
    int t = s.top();
    s.pop();
    Sort(s);
    Insert(s,t);
}

int main()
{
    IOS;
    int i,n,x;
    stack<int> s;
    cin>>n;
    for(i=0;i<n;i++) { 
        cin>>x;
        s.push(x);
    }
    Sort(s);
    while(s.size() !=0) {
        cout<<s.top()<<' ';
        s.pop();
    }
    return 0;
}