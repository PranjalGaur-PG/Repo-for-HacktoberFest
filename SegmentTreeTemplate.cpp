#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

class SegTree {
  vector<int> seg;

  public:
  SegTree(int n) {
    seg.resize(4*n + 1);
  }

  void build(int ind, int low, int high, vector<int>& arr) {
    if(low == high) {
      seg[ind] = arr[low];
      return;
    }

    int mid = (low+high)/2;
    build(2*ind + 1, low, mid, arr);
    build(2*ind + 2, mid+1, high, arr);
    
    seg[ind] = min(seg[2*ind + 1], seg[2*ind + 2]);
  } 

  int query(int ind, int low, int high, int l, int h) {
    if(l>high || h<low) return INT_MAX;

    if(low >= l && high <= h) return seg[ind];

    int mid = (low+high)/2;
    int left = query(2*ind + 1, low, mid, l, h);
    int right= query(2*ind + 2, mid+1, high, l, h);

    return min(left, right);
  }

  void update(int ind, int l, int h, int i, int& val) {
    if(l == h) {
      seg[ind] = val;
      return;
    }

    int mid = (h+l)/2;
    if(i<=mid) update(2*ind + 1, l, mid, i, val);
    else update(2*ind + 2, mid + 1, h, i, val);

    seg[ind] = min(seg[2*ind + 1], seg[2*ind + 2]);
  }
};


int main()
{
  IOS;
  int n;
  cin>>n;
  vector<int> ar1(n), ar2(n);

  for(int i=0;i<n;i++) cin>>ar1[i];
  SegTree sg1(n);
  sg1.build(0, 0, n-1, ar1);

  for(int i=0;i<n;i++) cin>>ar2[i];
  SegTree sg2(n);
  sg1.build(0, 0, n-1, ar2);

  int q;
  cin>>q;
  while(q--) {
    int type;
    cin>>type;
    // 1 for Finding min and 2 for updating value at index

    if(type == 1) {
      int l1, h1, l2, h2;
      cin>>l1>>h1>>l2>>h2;
      
      int mn1 = sg1.query(0, 0, n-1, l, h);
      int mn2 = sg2.query(0, 0, n-1, l, h);
      cout<<min(mn1, mn2)<<endl;
    }
    else {
      int arNo, ind, val;
      cin>>arNo>>ind>>val;
      
      if(arNo ==1)  {
        sg1.update(0, 0, n-1, ind, val, seg);
        ar1[ind] = val;
      }
      else {
        sg2.update(0, 0, n-1, ind, val, seg);
        ar2[ind] = val;
      }
      
      cout<<"U"<<endl;
    }
  }

  // cout<<endl;
  // cout<<query(0, 0, n-1, 0, 4, seg)<<endl;
  // for(auto it : arr) cout<<it<<" ";
  // cout<<endl;
  // for(int i=0;i<seg.size();i++) cout<<i<<"-"<<seg[i]<<"  ";
  return 0;
} 