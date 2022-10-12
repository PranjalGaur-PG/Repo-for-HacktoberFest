#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    string s,s1,s2="";
	    cin>>s;
	    int i,j,x,y,c=0,n=s.size();
	    s1 = s;
	    reverse(s1.begin(),s1.end());
	    int a[n+1][n+1];
        // cout<<s<<" "<<s1<<endl;
	    for(i=0;i<=n;i++) {
	        for(j=0;j<=n;j++) {
	            if(i==0 || j==0) a[i][j]=0;
	        }
	    }
	    for(i=1;i<=n;i++) {
	        for(j=1;j<=n;j++) {
	            if(s[i-1]==s1[j-1]) a[i][j] = a[i-1][j-1] + 1;
	           // else a[i][j] = max(a[i-1][j],a[i][j-1]);
	           else a[i][j] = 0;
	        }
	    }
	    i=n; j=n;
	    while(i>0 && j>0) {
	        if(s[i-1]==s1[j-1]) {
	            s2.push_back(s[i-1]); i--; j--;
                cout<<s2<<" ";
	        }
	        else if(a[i-1][j]>a[i][j-1]) i--;
	        else j--;
	    }
        cout<<endl;
	    reverse(s2.begin(),s2.end());
	    cout<<s2<<endl;
	}
	return 0;
}








// string countAndSay(int n) {
//         string s = "11";
//         if(n==1) return "1";
//         if(n==2) return "11";
//         int i,j,c=0,x,y;
//         for(i=2;i<n;i++) {
//             string ch=""; char pre;
//             c=1;
//             pre = s[0];
//             for(j=1;j<s.size();j++) {
//                 if(pre == s[j]) c++;
//                 else {
//                     ch += to_string(c) + s[j-1]; c=1;
//                     pre = s[j];
//                 }
//             }
//             s = ch;
//         }
//         return s;
//     }

// int main()
// {
//     IOS;
//     int i,n;
//     cin>>n;
//     rep(i,1,n+1) cout<<countAndSay(i)<<" ";
//     return 0;
// }