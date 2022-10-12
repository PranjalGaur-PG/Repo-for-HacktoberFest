#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 

int main()
{
    // IOS;
    test(t) {
        string s1,s2;
        ll v=0,a,b,n=0,i=0,f=0;
        cin>>s1>>s2;
        a= stoi(s1);
        b= stoi(s2);
        if(!(isPrime(a) && isPrime(b))) {
            cout<<"NO\n"; continue;
        }
        reverse(s1.begin(),s1.end());
        for(i=0;i<s1.size();i++) {
            switch(s1[i]) {
                case '0': s1[i]='0'; break;
                case '1': s1[i]='1'; break;
                // case '5': s1[i]='5'; break;
                case '6': s1[i]='9'; break;
                case '8': s1[i]='8'; break;
                case '9': s1[i]='6'; break;
                default: f=1;
            }
        }
        // cout<<s1<<" "<<s2<<endl;

        if(f==1) {
            cout<<"NO\n"; continue;
        }
        else if(s1==s2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}