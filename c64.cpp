#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int funLeft(int a[],int n,int x) {
    int m,l=0,h=n-1;
    while(h>=l) {
        m = (h+l)/2;    
        if((m==0 || x>a[m-1]) && x==a[m]) return m;
        else if(x>a[m]) l = m+1;
        else h = m-1;
    }
    return -1;
}
int funRight(int a[],int n,int x) {
    int m,l=0,h=n-1;
    while(h>=l) {
        m = (h+l)/2;
        if((m==n-1 || x<a[m+1]) && a[m]==x) return m;
        else if(x>a[m]) l = m+1;
        else h = m-1;
    }
    return -1;
}
int count(int a[],int n,int x) 
{
    int c1,c2,count;
    c1 = funLeft(a,n,x);
    c2 = funRight(a,n,x);
    if(c1==-1) return -1;
    count = c2 - c1 + 1;
    return count;
}
// -----------------------------------------------------------------------------------------------

int first_index(int arr[],int low,int high,int x,int n)
{
    int mid;
    if(high >= low) 
    {
        mid = (low + high)/2;
        if( ( mid == 0 || x > arr[mid-1]) && arr[mid] == x) 
            return mid;
        else if(x > arr[mid]) 
            return first_index(arr, (mid + 1), high, x, n);
        else 
            return first_index(arr, low, (mid -1), x, n);
    }
    return -1;
}
int last_index(int arr[],int low,int high,int x,int n)
{
    int mid;
    if (high >= low) 
    {
        int mid = (low + high);   
        if( ( mid == n-1 || x < arr[mid+1]) && arr[mid] == x ) 
            return mid;
        else if(x < arr[mid]) 
            return last_index(arr, low, (mid -1), x, n);
        else 
            return last_index(arr, (mid + 1), high, x, n);
    }
    return -1;
}
int count_occurences(int arr[],int n,int x) 
{
    int i,j,count;
    i = first_index(arr, 0, n-1, x, n);
    j = last_index(arr, 0, n-1, x, n);
    if(i==-1) return -1;
    count = j-i + 1;
    return count;
}

int main()
{
    IOS;
    int n,x;
    cin>>n>>x;
    int a[n],i,j,k,l;
    for(i=0;i<n;i++) cin>>a[i];
    int c1,c2; 
    cout<<count(a,n,x)<<" ";    // Wrong
    cout<<count_occurences(a,n,x); //Correct
    return 0;
}

/* Test cases

8 6 
1 2 3 4 5 5 5 8 10     Ans 3

5 1
1 1 1 1 1    Ans 5

6 8
1 2 3 8 8 8   Ans 8

*/