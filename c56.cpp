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
    test(t) {
        int n;
        cin >> n;
        int a[n + 1], mx[n + 1];
        mx[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            mx[i] = max(mx[i - 1], a[i]);
        } 
        int aim = n, r = n, i = n;
        while (i > 0) {
            if (a[i] == aim) {
                aim = mx[i - 1];
                for (int j = i; j <= r;j++) {
                    cout << a[j] << ' ';
                }
                r = i - 1;
            }
            i--;
        }
        cout<<endl;
    }
    return 0;
}