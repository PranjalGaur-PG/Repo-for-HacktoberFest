#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

    int fun(vector<int> nums, int t,unordered_map<int,int> m) {
        if(m.find(t) != m.end()) {
            m[t]++;
            return m[t];
        }
        if(t==0) return 1;
        else if(t<0) return 0;
        int c=0,x;
        int i,n = nums.size();
        for(i=0;i<n;i++) {
            c += fun(nums,t-nums[i],m); 
            cout<<nums[i]<<" "<<t<<endl;
        }
        m[t] = c;
        return c;
    }

    int combinationSum4(vector<int>& nums, int t) {
        unordered_map<int,int> m;
        int ans = fun(nums,t,m);
        return ans;
    }

int main()
{
    IOS;
    int i,n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(i=0;i<n;i++) cin>>a[i];
    int ans = combinationSum4(a,x);
    cout<<ans;
    return 0; 
}