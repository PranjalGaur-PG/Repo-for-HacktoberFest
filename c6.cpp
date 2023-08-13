#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int mxInc = 1, mxDec = 1, curInc = 1, curDec = 1;

    for(int i=1;i<n;i++) {
        if(arr[i] > arr[i-1]) {
            curInc++;
            mxInc = max(curInc, mxInc);
            curDec = 1;
        }
        else if(arr[i] < arr[i-1]) {
            curDec++;
            mxDec = max(curDec, mxDec);
            curInc = 1;
        }
    }

    cout<<max( mxDec, mxInc) - 1;
    return 0;
}

