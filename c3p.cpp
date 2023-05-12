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
  test(t) {
    ll n,c, x;
    cin>>n>>c;
    vector<ll> a(n, 0);
    vector<vector<ll>> arr;
    for(ll i=0;i<n;i++) {
        cin>>x;
        vector<ll> t1, t2;
        t1.push_back(x+1+i);
        t1.push_back(i+1);
        t1.push_back(1);
        t2.push_back(x+n-i);
        t2.push_back(i+1);
        t2.push_back(2);
        arr.push_back(t1);
        arr.push_back(t2);
    }

    sort(arr.begin(), arr.end());
    set<int> st;
    // for(int i=0;i<arr.size();i++) {
    //     cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
    // }

    ll s=0, i=0, z = 0;
    vector<ll> vis(n+1, 0);
    ll ans = 0;
    while(z<arr.size()) {
        if(arr[z][2]==1 && arr[z][0]<c) {
            s += arr[z][0];
            vis[arr[z][1]] = 1;
            cout<<arr[z][1]<<" ";
            ans++;
            break;
        }
        z++;
    }

    while(i<arr.size()) {
        if(!vis[arr[i][1]]) {
            s += arr[i][0];
            vis[arr[i][1]] = 1;
            if(s>c) break;  
            ans++;
            cout<<arr[i][1]<<" ";
        }
        i++;
    }

    // cout<<endl;
    cout<<ans<<endl;

  }
  return 0;
}