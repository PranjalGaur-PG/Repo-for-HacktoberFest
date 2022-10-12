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
        int n,i,j,k,l,m;
        cin>>n>>m;
        int a[n][m],s=0;
        for(i=0;i<n;i++) for(j=0;j<m;j++) cin>>a[i][j];
        for(i=0;i<n;i++) {
            for(j=1;j<m;j++) {
                if(a[i][j]<0 || a[i][j-1]<0) {
                    if( (a[i][j]<0 && a[i][j-1]<0) || (a[i][j]<0 && abs(a[i][j])>a[i][j-1]) || (a[i][j-1]<0 && abs(a[i][j-1])>a[i][j]) ){
                        a[i][j]*=-1;  a[i][j-1]*=-1;
                    } 
                }
            }
        }
        for(i=0;i<m;i++) {
            for(j=1;j<n;j++) {
                if(a[i][j]<0 || a[i][j-1]<0) {
                    if( (a[i][j]<0 && a[i][j-1]<0) || (a[i][j]<0 && abs(a[i][j])>a[i][j-1]) || (a[i][j-1]<0 && abs(a[i][j-1])>a[i][j]) ){
                        a[i][j]*=-1;  a[i][j-1]*=-1;
                    } 
                }
            }
        }
        for(i=0;i<n;i++) for(j=0;j<m;j++) s += a[i][j];
        cout<<s<<endl;
    }
    return 0;
}