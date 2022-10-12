#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int firstRepeated(int arr[], int n) {
    unordered_map<int, int> umap;
    for(int i=0;i<n;i++){
    // unordered_map<int,int>::const_iterator got =umap.find(arr[i]);  
    if (umap.find(arr[i]) == umap.end())
        umap[arr[i]]=i+1;

    else
        return umap[arr[i]];}
    //code here
    return -1;
}

int main()
{
    IOS;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<firstRepeated(a,n);
    return 0;
}