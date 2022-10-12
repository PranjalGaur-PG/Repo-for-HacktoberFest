#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

ll fun(ll n,ll k) {
    ll i,j,c,x,val=0;
    c = n;
    vector<int> num;
        if(n==0 && k==0) {
            // cout<<1<<endl;
            return 1;
        }
        while(c>0) {
            num.push_back(c%10);
            c /= 10;
        }
        reverse(num.begin(),num.end());
        // for(i=0;i<num.size();i++)cout<<num[i];
        // cout<<endl;
        int sz=num.size();
        // while(1) {
            for(i=0;i<sz;i++) {
                if(num[i] == k) {
                    if(i == 0 && k == 9) {
                        num.push_back(0);
                        sz++;
                        for(j=0;j<sz;j++) num[j]=0;
                        num[0]=1;
                    }
                    else {
                        num[i]++;
                        for(j=i+1;j<sz;j++) num[j]=0;
                    }
                }
            }
        // }
        for(i=0;i<sz;i++) val = (val*10) + num[i];
        // cout<<val<<endl;
        // cout<<val - n<<endl;
        return (val-n);
}

bool check(ll n,ll k) {
    vector<int> num;
    ll c=n;
    while(c>0) {
        num.push_back(c%10);
        c /= 10;
    }
    ll i,sz=num.size();
    for(i=0;i<sz;i++) {
        if(k == num[i]) return true;
    }
    return false;
}

int main()
{
    IOS;
    test(t) {
        ll n,i,j,o,x,k,val=0;
        cin>>n>>k;
        o = n;
        ll sum = fun(n,k);
        ll answer=sum;
        n += sum;
        while(check(n,k) == true) {
            ll sum = fun(n,k);
            n += sum;
            answer+=sum;
        }
        cout<<answer<<endl;
    }
    return 0;
}