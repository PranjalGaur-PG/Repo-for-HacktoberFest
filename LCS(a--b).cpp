// The program is to calcaulate the number of insertions and deletions 
// required to convert a String "a" to "b"

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

// This function returns the Least Common Subsequence 
int LCS(string a,string b) {
    int n=a.length(), m=b.length(), i,j,k,l,c=0;
    int arr[n+1][m+1];
    for(i=0;i<=n;i++) for(j=0;j<=m;j++) if(i==0 || j==0) arr[i][j]=0;
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            if(a[i-1]==b[j-1]) arr[i][j] = arr[i-1][j-1] + 1;
            else arr[i][j] = max( arr[i-1][j],arr[i][j-1] );
        }
    }
    // cout<<arr[n][m]<<endl; 
    return arr[n][m];
}

// This fuction displays the number of deletions and insertions required 
void fun(string a,string b) {
    int c = LCS(a,b);
    cout<<"deletions: "<<a.length()-c<<" and insertions: "<<b.length()-c;
}

int main() {
    string a,b;
    cin>>a>>b;
    fun(a,b);
    return 0;
}