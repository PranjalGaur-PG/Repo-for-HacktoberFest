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
    string a,b;
    cin>>a>>b;
    string s1="", s2="", s3="", s4="";
    s1.push_back(a[0]); s1.push_back(a[1]);
    s2.push_back(a[3]); s2.push_back(a[4]);
    s3.push_back(b[0]); s3.push_back(b[1]);
    s4.push_back(b[3]); s4.push_back(b[4]);
    int a1,a2,b1,b2,l1,l2;
    a1 = stoi(s1); a2 = stoi(s2);
    b1 = stoi(s3); b2 = stoi(s4);
    l1 = a1*60 + a2;
    l2 = b1*60 + b2;
    l2 = abs(l2 - l1)/2;
    l1 += l2;
    printf("%02d:%02d",l1/60,l1%60);
    // cout<<setw(2)<<setfill('0')<<l1/60<<":"<<setw(2)<<setfill('0')<<l1%60; 
    return 0;
}