#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

    int close(vector<int> arr,int a,int b,int x) {
        if(abs(arr[a]-x) <= abs(arr[b]-x)) return a;
        else return b;
    }

    int search(vector<int> a,int x) {
        int m,i,j,n=a.size();
        if(a[0]>x) return 0;
        if(a[n-1]<x) return n;
        
        i=0,j=n;
        while(i<j) {
            m = (i+j)/2;
            if(a[m] == x) return m;
            else if(a[m]>x) {
                if(m>0 && a[m-1]<x) return close(a,m-1,m,x);
                j = m;
            }
            else {
                if(m<n && a[m+1]>x) return close(a,m,m+1,x);
                i = m+1;
            }
        }
        return m;
    }
    
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        int i,j,y,n=arr.size(),ind;
        ind = search(arr,x);
        cout<<ind<<endl;
        
        if(ind == 0) {
            vector<int> ans(arr.begin(),arr.begin()+k);
            return ans;
        }
        else if(ind == n) {
            vector<int> ans(arr.begin()+n-k,arr.begin()+n);
            return ans;
        }
        // if(x == arr[ind]) {
        //     i = ind-1; j= ind+1;
        //     k--;
        // }
        // else {
        //     i = ind; j= ind+1;
        // }
        i=ind-1; j=ind;
        while(k--) {
            if(i<0) j++;
            else if(j>=arr.size()) i--;
            else {
                if(abs(arr[i]-x) <= abs(arr[j]-x)) i--;
                else j++;
            }
        }
        
        vector<int> ans;
        for(y=i+1;y<j-1;y++) ans.push_back(arr[y]);
        return ans;
    }

int main()
{
    IOS;
    int n,k,x;
    cin>>n>>k>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> ans = findClosestElements(arr,k,x);
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    return 0; 
}