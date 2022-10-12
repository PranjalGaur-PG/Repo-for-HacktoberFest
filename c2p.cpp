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
  string s;
  int n, k;
  cin>>s>>n>>k;
  vector<string> str;
  str.push_back("ABC");
  str.push_back("DEF");
  str.push_back("GHI");
  str.push_back("JKL");
  str.push_back("MNO");
  str.push_back("PQRS");
  str.push_back("TUV");
  str.push_back("WXYZ");

  reverse(str.begin(), str.end());

  string ans="";
  for(int i=0;i<n;i++) {
    int val = s[i]-'2', ind;
    if(val == 7 || val == 5) {
      ind = (int)(k/pow(4,i))%4;
      if(ind == 0) ind=3;
      else if(ind==1) ind=0;
      else if(ind==2) ind=1;
      else ind=2;
      ans.push_back(str[val][ind]);
    }
    else {
      ind = (int)(k/pow(3,i))%3;
      if(ind == 0) ind=2;
      else if(ind==1) ind=0;
      else ind=1;
      ans.push_back(str[val][ind]);
    }
  }

  reverse(ans.begin(), ans.end());
  cout<<ans;

  return 0;
}