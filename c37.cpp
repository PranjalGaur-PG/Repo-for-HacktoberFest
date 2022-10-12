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
    string a,b;
    cin>>a>>b;
    vector<int> a_v, a_c, b_v, b_c;
    int i,j,k,c=0,l1=a.length(), l2=b.length();
    if(l1!=l2) {
        cout<<"No"; return 0;
    }
    for(i=0;i<l1;i++) {
        switch(a[i]) {
            case 'a': case 'e': case 'i': case 'o': case 'u': a_v.push_back(i); break;
            default: a_c.push_back(i);  
        }
    }
    for(i=0;i<l2;i++) {
        switch(b[i]) {
            case 'a': case 'e': case 'i': case 'o': case 'u': b_v.push_back(i); break;
            default: b_c.push_back(i);  
        }
    }
    if(a_v.length() != b_v.length() || a_c.length() != b_c.length()) {
        cout<<"No"; return 0;
    }
    else {

    }
    return 0;
}