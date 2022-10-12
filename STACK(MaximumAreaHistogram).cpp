#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int MAH(int a[],int n) {
    int i,j,m=0;
    for(i=0;i<n;i++) cin>>a[i];
    vector<int> vr,vl;
    stack<pair<int,int>> sr,sl;

    // Loop to find a vector having index of left smaller element.
    // If no such element present, then add -1 to the list (-1 is taken as pseudo index)
    for(i=0;i<n;i++) {  
        while(sl.size()!=0 && sl.top().first >= a[i]) sl.pop();
        if(sl.size()==0) vl.push_back(-1);
        else vl.push_back(sl.top().second);
        sl.push( {a[i],i} );
    }

    // Loop to find a vector having index of right smaller element.
    // If no such element present, then add 'n' to the list ('n' is taken as pseudo index)
    for(i=n-1;i>=0;i--) {
        while(sr.size()!=0 && sr.top().first >= a[i]) sr.pop();
        if(sr.size()==0) vr.push_back(n);
        else vr.push_back(sr.top().second);
        sr.push( {a[i],i} );
    }
    reverse(vr.begin(),vr.end());

    // Just some Debugging
    // for(i=0;i<n;i++) cout<<vl[i]<<" ";
    // cout<<endl;
    // for(i=0;i<n;i++) cout<<vr[i]<<" ";
    // cout<<endl;

    // Processing of elements of the arrays 
    for(i=0;i<n;i++) m = max(m , ((vr[i]-vl[i]-1)*a[i]));
    
    return m;
}

int main()
{
    IOS;
    int n;
    cin>>n;
    int a[n];
    cout<<MAH(a,n);
    return 0;
}
