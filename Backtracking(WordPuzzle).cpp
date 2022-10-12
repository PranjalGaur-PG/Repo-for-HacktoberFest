#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

void Print(vector<string> a) {
    int i,j,n=a.size();
    for(i=0;i<n;i++) {
        cout<<a[i]<<endl;
    }
}

bool horiFit(vector<string> a, string w,int i,int j) {
    int n=a.size();
    if(j-1>=0 && a[i][j-1]!='+') return false;
    else if(j+w.size() < a[0].size() && a[i][j+w.size()] != '+') return false;

    for(int jj=0; jj<w.size(); jj++) {
        if(j+jj >= a[0].size()) return false;

        if(a[i][j+jj] == w[jj] || a[i][j+jj] == '-') continue;
        else return false;
    }
    return true;
}

vector<bool> horiSet(vector<string> a,string s,int i,int j) {
    int n=a.size();
    vector<bool> b(n);
    for(int jj=0;jj<s.size();jj++) {
        if(a[i][j+jj] == '-') {
            a[i][j+jj] = s[jj];
            b[jj] = true;
        }
        else b[jj]=false;
    }
    return b;
}

void horiReset(vector<string> a,vector<bool> b,int i,int j) {
    for(int jj=0;jj<b.size();jj++) {
        if(b[jj] == true) a[i][j+jj] = '-';
    }
}

bool vertFit(vector<string> a,string w,int i,int j) {
    int n=a.size();
    if(i-1>=0 && a[i-1][j]!='+') return false;
    else if(i+w.size() < a.size() && a[i+w.size()][j] != '+') return false;

    for(int ii=0; ii<w.size(); ii++) {
        if(i+ii >= a.size()) return false;

        if(a[i+ii][j] == w[ii] || a[i+ii][j] == '-') continue;
        else return false;
    }
    return true;
}

vector<bool> vertSet(vector<string> a,string s,int i,int j) {
    int n=a.size();
    vector<bool> b(n);
    for(int ii=0;ii<s.size();ii++) {
        if(a[i+ii][j] == '-') {
            a[i+ii][j] = s[ii];
            b[ii] = true;
        }
        else b[ii]=false;
    }
    return b;
}

void vertReset(vector<string> a,vector<bool> b,int i,int j) {
    for(int ii=0;ii<b.size();ii++) {
        if(b[ii] == true) a[i+ii][j] = '-';
    }
}

void solution(vector<string> a, vector<string> s,int ind) {
    
    if(ind == s.size()) {
        Print(a);
        return;
    }   

    int i,j,n=a.size(),x=s.size();
    string w = s[ind];
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i][j]=='-' || a[i][j]==w[0]) {
                if(horiFit(a,w,i,j)) {
                    vector<bool> b = horiSet(a,w,i,j);
                    solution(a,s,ind+1);
                    horiReset(a,b,i,j);
                }
                if(vertFit(a,w,i,j)) {
                    vector<bool> b = vertSet(a,w,i,j);
                    solution(a,s,ind+1);
                    vertReset(a,b,i,j);
                }
            }
        }
    }
}

int main()
{
    IOS;
    int n,i,j,x;
    cin>>n>>x;
    vector<string> a(n);
    vector<string> s(n);
    for(i=0;i<n;i++) cin>>a[i];
    for(j=0;i<x;i++) cin>>s[i];
    solution(a,s,0);
    return 0;
}