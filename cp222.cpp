#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        stack<int> s1;
        vector<int> v1,v2;
        ll ans=INT_MIN;
        int i,j,k;
        // s1.push({arr[0],0});
        for(i=0;i<n;i++) {
            while(s1.size() != 0 && arr[s1.top()]<arr[i]) s1.pop();
            if(s1.size()!=0) v1.push_back(s1.top());
            else v1.push_back(i);
            s1.push(i);
        }
        while(s1.size()!=0) s1.pop();
        for(i=n-1;i>=0;i--) {
            while(s1.size() != 0 && arr[s1.top()]<arr[i]) s1.pop();
            if(s1.size()!=0) v2.push_back(s1.top());
            else v2.push_back(i);
            s1.push(i);
        }
        reverse(v2.begin(),v2.end());
        for(i=0;i<n;i++) {
            cout<<arr[v1[i]]<<" "<<arr[v2[i]]<<endl;
        }
        cout<<endl;
        for(i=0;i<n;i++) {
            ans = max(ans , (v2[i]-v1[i]+1)*(arr[i]));
            cout<<ans<<" ";
        }
        cout<<endl;
        return ans;
    }

int main()
{
    IOS;
    ll i,n;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++) cin>>a[i];
    ll ans = getMaxArea(a,n);
    cout<<ans;
    return 0;
}