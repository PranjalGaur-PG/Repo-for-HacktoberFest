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
    string s;
    cin >> s;
    int max = 0;
    int lidx = 0;
    int ridx = s.size()-1;
    vector<int> ans;
    while(lidx < ridx) {
        if(s[lidx] == '(') {
            if(s[ridx] == ')') {
                ans.push_back(lidx+1);
                ans.push_back(ridx+1);
                lidx++;
                ridx--;
            } else {
                ridx--;
            }
        } else {
            lidx++;
        }
    }   
    if(ans.size() == 0) {
        cout << 0 << endl;
    } else {
        sort(ans.begin(), ans.end());
        cout << 1 << endl;
        cout << ans.size() << endl;
        for(int i=0;i<ans.size();i++) cout << ans[i] << " ";
        cout << endl;
    }
}