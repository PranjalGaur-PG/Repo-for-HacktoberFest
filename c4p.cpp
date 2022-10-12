#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

void solve() {
    int t=0;    
    string s;
    string num="";
    string num1="";
    getline(cin,s);
    for(int z=0;z<s.size();z++) s[z] = tolower(s[z]);
    int n =s.length();
    string c;
    getline(cin,c);
    for(int z=0;z<c.size();z++) c[z] = tolower(c[z]);
    string num2="";
    int m = c.length();

    for(int i=0; i<n; i++){
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]){
                t=1;
            }
        }
    }

    string w="";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(s[i]==c[j]){
                w+=s[i];
                
            }
            
            
            }
            
        }
    int g =w.length();    

    for (int i = 0; i < g; i++) {  
            if (w[i] - '0' >= 0 and w[i] - '0' <= 9) {
                num += w[i];
            }
    }
    for(int i = 0; i< g; i++){
            if(isdigit(w[i])){
                w.erase(i, 1);
                i--;
            }
        }
    if(t==0){    
    cout<<w<<" "<<num;
    }
    else{
        cout<<"New Language Error";
    }
}

int main(){
    solve();
    return 0;

}