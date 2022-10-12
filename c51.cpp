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
    int n,k,i,j;
    cin >> n >> k;
    vector<string> v(n);
    for (i = 0; i < n; ++i) cin >> v[i];
    deque<string> d;
    int ind = 0;
    for (i = 0; i < n; ++i) {
    	string re = v[i];
    	reverse(re.begin(), re.end());
    	if (v[i] == re) {
    		ind = i;
    		d.push_back(v[i]);
    		break;
    	}
    }
    for (i = 0; i < n; ++i) {
    	for (j = i+1; j < n; ++j) {
    		string s = v[j];
    		reverse(s.begin(), s.end());
    		if (v[i] == s) {
    			d.push_front(v[i]);
    			d.push_back(v[j]);
    		}		
    	}
    }
    cout << d.size() * k << '\n';
    for (i=0;i<d.size();i++) cout<<d[i];
    return 0;
}