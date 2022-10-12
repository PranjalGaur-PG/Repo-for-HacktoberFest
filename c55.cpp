#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int uniqueMorseRepresentations(vector<string>& words) {
        string al[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        int i,j,k,c=0,x,y,n=words.size();
        string s[n];
        unordered_set<string> ss;
        for(i=0;i<n;i++) {
            for(j=0;j<words[i].size();j++) {
                s[i] += al[words[i][j]-'a'];
            }
            cout<<s[i]<<endl;
            ss.insert(s[i]);
        }
        return ss.size();
    }

int main()
{
    IOS;
    vector<string> s;
    s.push_back("gin");
    s.push_back("zen");
    s.push_back("gig");
    s.push_back("msg");
    int c=uniqueMorseRepresentations(s);
    cout<<c;
    return 0;
}