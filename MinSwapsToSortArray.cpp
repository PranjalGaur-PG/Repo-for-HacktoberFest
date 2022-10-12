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
    int n,i,j,x,y,c,ans=0,e;
    cin>>n;
    pair<int,int> a[n];
    for(i=0;i<n;i++) {
        cin>>a[i].first;
        a[i].second = i;
    }
    sort(a,a+n);
    bool v[n];
    memset(v,false,sizeof(v));
    for(i=0;i<n;i++) {
        c=0;
        if(v[i]==false && a[i].second!=i) {
            j = i;
            while(!v[j]) {
                v[j]=true;
                j = a[j].second;
                c++;
            }
        }
        if(c>0) ans++;
    }
    cout<<ans;
    return 0;
}