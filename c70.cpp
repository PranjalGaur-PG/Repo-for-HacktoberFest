#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

string minWindow(string s, string t) {
        
    //     int m[256] = { 0 };
 
    // // Answer
    // int ans = INT_MAX; // length of ans
    // int start = 0; // starting index of ans
    // int count = 0;
    // // creating map
    // for (int i = 0; i < t.length(); i++) {
    //     if (m[t[i]] == 0)
    //         count++;
    //     m[t[i]]++;
    // }
 
    // // References of Window
    // int i = 0;
    // int j = 0;
 
    // // Traversing the window
    // while (j < s.length()) {
    //     // Calculations
    //     m[s[j]]--;
    //     if (m[s[j]] == 0)
    //         count--;
 
    //     // Condition matching
    //     if (count == 0) {
    //         while (count == 0) {
    //             // Soring ans
    //             if (ans > j - i + 1) {
    //                 ans = min(ans, j - i + 1);
    //                 start = i;
    //             }
    //             // Sliding I
    //             // Calculation for removing I
 
    //             m[s[i]]++;
    //             if (m[s[i]] > 0)
    //                 count++;
 
    //             i++;
    //         }
    //     }
    //     j++;
    // }
 
    // if (ans != INT_MAX)
    //     return s.substr(start, ans);
    // else
    //     return "-1";

        unordered_map<char,int> m;
        int i,j,c=0,n=s.size(), o=t.size(),num;
        for(i=0;i<o;i++) {
            if(m.find(t[i]) == m.end()) c++;
            m[t[i]]++;
        }
        num = c;
        int a,b,ab=INT_MAX;
        i=0,j=0;
        while(j<n) {
            if(m.find(s[j]) != m.end()) {
                m[s[j]]--;
                if(m[s[j]]==0) c--;
            }
            if(c==0) {
                while(c==0) {
                    if((j-i+1)<ab) {
                        ab = j-i+1;
                        a = i; b= j;
                    }
                    if(m.find(s[i]) !=m.end()) {
                        if(m[s[i]]==0) c++;
                        m[s[i]]++;
                    }
                    i++;
                }
            }
            j++;
        }
        string ans = s.substr(a,ab);
        // for(i=a;i<=b;i++) ans.push_back(s[i]);
        return ans;
    }

int main()
{
    IOS;
    string a,s,t;
    cin>>s>>t;
    a = minWindow(s,t);
    cout<<a;
    return 0;
}