#include<bits/stdc++.h>
using namespace std;

void final_solve(vector<int> temp) {
    map<int,int> ump;
        for(int i=0;i<temp.size();i++)
        {
            ump[temp[i]]++;
        }
        for(auto i : ump) {
            cout<<i.first<<" ";
            if(i.first==0)  {
                cout<<0;
            }
            else
            {
                cout<<i.second;
            }
            break;
    }
}

void solve1(int i, int cnt, string &str, int& co, int& ce) {
    while(i<cnt)
    {
        if(str[i]=='O')
        {
            co++;
        }
        else{ce++;}

        i++;
    }
}

void solve() {
    int cnt;
    cin>>cnt;
    string str;
    cin>>str;

    int co=0, ce=0;
    int i = 0;
    
    solve1(i, cnt, str, co, ce);

    if(co == cnt)
    {
        cout<<0<<" "<<0; 
    }
    else{

        vector<int> temp;
        int p=0;
        int x=0;
        while(x<co) {
            if(str[x]=='E') {
                p++;
            }
            x++;
        }
        temp.push_back(p);

        for(int i=1;i<=cnt-co;i++)
        {
            if(str[i-1]=='E')
            {
                p--;
            }

            if(str[co+i-1]=='E')
            {p++;}

            temp.push_back(p);
        }

        final_solve(temp);

    }

}

int main()
{
    solve();

    return 0;
}