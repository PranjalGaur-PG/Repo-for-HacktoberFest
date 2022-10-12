#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

void Insert(vector<int>& a, int temp) {
    if(a.size()==0 || a[a.size()-1]<=temp) { a.push_back(temp); return; }
    int t = a[a.size()-1];
    a.pop_back();
    Insert(a,temp);
    a.push_back(t);
}

void Sort(vector<int>& a) {
    if(a.size()==1) return;
    int temp = a[a.size()-1];
    a.pop_back();
    Sort(a);
    Insert(a,temp);
}

int main()
{
    IOS;
    int n,i;
    cin>>n;
    vector<int> a(n,0);
    for(i=0;i<n;i++) cin>>a[i];
    Sort(a);
    for(i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}