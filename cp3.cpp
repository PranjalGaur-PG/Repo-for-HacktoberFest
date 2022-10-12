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
    int t,x;
    cin>>x;
    for(t=1;t<=x;t++) {
        ll dr=-1,dl=-1,i,j,n,s=0;
        cin>>n;
        string a;
        ll r[n],l[n];
        cin>>a;
        for(i=0;i<n;i++) {
            if(a[i]=='1') {
                dl = i;
                l[i] = i;
            }
            else {
                if(dl==-1) l[i] = -1;
                else l[i] = i-dl;
            }
        }
        // cout<<a<<endl;
        for(i=n-1;i>=0;i--) {
            if(a[i]=='1') {
                dr = i;
                r[i] = i;

                // cout<<r[i]<<endl;
            }
            else {
                if(dr==-1) r[i] = -1;
                else r[i] = dr - i;
            }
            // cout<<"=> "<<i<<" "<<r[i]<<endl;
        }
        for(i=0;i<n;i++) cout<<i<<" => "<<l[i]<<" "<<r[i]<<endl;
        for(i=0;i<n;i++) {
            if(r[i]==-1) {
                s += (i-l[i]);
            }
            else if(l[i]==-1) s += (r[i]-i);
            else s += min(abs(r[i]-i),abs(i-l[i]));
        }
        cout<<"Case #"<<t<<": "<<s<<endl;
    }
    return 0;
}