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
    string str,str2;
	int i,j,n;
	cin>>n>>str;
	str2=str;
	vector<int> vec, vec2;
	for (i = 0; i < n - 1; ++i) {
		if (str2[i] == 'W') {
			vec2.push_back(i + 1);
			str2[i] = 'B';
			if (str2[i + 1] == 'W') str2[i + 1] = 'B';
			else str2[i + 1] = 'W';
		}
	}
	for (i = 0; i < n - 1; ++i) {
		if (str[i] == 'B') {
			vec.push_back(i + 1);
			str[i] = 'W';
			if (str[i + 1] == 'W') str[i + 1] = 'B';
			else str[i + 1] = 'W';
		}
	}
	if (str2[n - 1] == 'W' && str[n - 1] == 'B') cout<<"-1";
	else if (str2[n - 1] == 'W') {
			cout<<vec.size()<<endl;
			for (i = 0; i < vec.size(); ++i) cout<<vec[i]<<" ";
		}
		else {
			cout<<vec2.size()<<endl;
			for (i = 0; i < vec2.size(); ++i) cout<<vec2[i]<<" ";
		}
    return 0; //
}