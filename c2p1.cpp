#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int fun(string str,ll n)
{
  if(n==1) return 1;
  if(n%2==0)
  {
    ll i =0, j=n/2;
    while(j<n)
    {
      if(str[i] != str[j])
      return 0;

      i++;j++;
    }
    return fun(str,n/2);
  }
  return fun(str,n-1);
}

int main()
{
    IOS;
    test(t) {
        ll n;
        string str;
        cin>>n>>str;

        int flg;
        if(fun(str, n)==1) flg= 1;
        else flg = 0;

        if(flg) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}