#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

void build(int ind, int low, int high, vector<int>& arr, vector<int>& seg) {
  if(low == high) {
    seg[ind] = arr[low];
    return;
  }

  int mid = (low+high)/2;
  build(2*ind + 1, low, mid, arr, seg);
  build(2*ind + 2, mid+1, high, arr, seg);
  
  seg[ind] = min(seg[2*ind + 1], seg[2*ind + 2]);
} 

int query(int ind, int low, int high, int l, int h, vector<int>& seg) {
  if(l>high || h<low) return INT_MAX;

  if(low >= l && high <= h) return seg[ind];

  int mid = (low+high)/2;
  int left = query(2*ind + 1, low, mid, l, h, seg);
  int right= query(2*ind + 2, mid+1, high, l, h, seg);

  return min(left, right);
}

int main()
{
  IOS;
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];

  vector<int> seg(4*n);
  build(0, 0, n-1, arr, seg);

  int q;
  cin>>q;
  while(q--) {
    int l, h;
    cin>>l>>h;
    cout<<query(0, 0, n-1, l, h, seg)<<endl;
  }
  return 0;
} 