#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

    int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int i=0,j=m-1,c=m;
	    while(i<n) {
	        while(arr[i][j] == 1 && j>=0) j--;
            i++;
	    }
        j++;
	    return (m-j);
	}

int main()
{
    IOS;
    int n,m,i,j;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int> (m));
    for(i=0;i<n;i++) for(j=0;j<m;j++) cin>>a[i][j];
    cout<<rowWithMax1s(a,n,m);
    return 0;
}