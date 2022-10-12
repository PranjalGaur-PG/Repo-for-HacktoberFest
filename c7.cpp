#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

void fun(int a[],int n,int k) {
    int i,j,l,max=a[0],index=0;
    for(i=0;i<n;i++) if(a[i]>max) max=a[i];
    max++;
    vector<int> bt[k];
    for(i=0;i<n;i++) {
        l=(a[i]*k)/max;
        bt[l].push_back(a[i]);
    }
    for(i=0;i<k;i++) sort(bt[i].begin(),bt[i].end());
    for(i=0;i<k;i++) {
        for(j=0;j<bt[i].size();i++) {
            a[index++]=bt[i][j];
        }
    }
}

int main()
{
    IOS;
    int i,j,n,k;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    fun(a,n,k);
    for(i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}