#include <iostream>
#include <queue>
using namespace std;
typedef pair<int,int> pr;

void showp1(priority_queue<pr> g) {
    
    while (!g.empty()) {
        cout<<g.top().first<<" "<<g.top().second<<endl;
        g.pop();
    }
    cout << endl;
}

void showp2(priority_queue<pr, vector<pr>, greater<pr>> g) {
    
    while (!g.empty()) {
        cout<<g.top().first<<" "<<g.top().second<<endl;
        g.pop();
    }
}

int main()
{
    priority_queue<pr> p1;
    priority_queue<pr, vector<pr>, greater<pr>> p2;

    p1.push(make_pair(4, 5));
    p1.push(make_pair(4, 2));
    p1.push(make_pair(5, 4));
    p1.push(make_pair(1, 6));
    p1.push(make_pair(7, 3));
    p1.push(make_pair(9, 4));
    p2.push(make_pair(4, 5));
    p2.push(make_pair(4, 2));
    p2.push(make_pair(5, 4));
    p2.push(make_pair(1, 6));
    p2.push(make_pair(7, 3));
    p2.push(make_pair(9, 4));
    cout<<"Descending order - "<<endl;
    showp1(p1);
    cout<<"Ascending order - "<<endl;
    showp2(p2);
    return 0;
}