#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

void sortK(vector<int>& a,int n,int k) {
    int i,j=0;
    // int s = (n==k) ? k : k+1;
    priority_queue<int,vector<int>,greater<int>> p(a.begin(),a.begin()+k);
    // for(i=0;i<k;i++) p.push(a[i]);
    for(i=k;i<n;i++) {
        a[j] = p.top();
        p.pop();
        p.push(a[i]);
        j++;
    }
    while(p.size()!=0) {
        a[j]=p.top();
        p.pop(); 
        j++;
    } 
}

void printArray(vector<int> a, int size)
{
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int n,i,k;
    cin>>n>>k;
    vector<int> a(n);
    for(i=0;i<n;i++) cin>>a[i];
    sortK(a, n, k);
    cout << "Following is sorted array" << endl;
    printArray(a, n);
    return 0;
}