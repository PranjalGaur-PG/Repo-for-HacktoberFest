#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

struct Node {
    int data;
    Node* link;
};
struct Node* top;

// Node* push(int val) {
//     Node* temp;
//     temp=new Node();
    
//     if(!temp) {
//         cout<<"Overflow !!"; exit(1);
//     }

//     temp->data = val;
//     temp->link = top;
//     top = temp;
// }

void push(int data)  {  
    // Create new node temp and allocate memory  
    struct Node* temp;  
    temp = new Node();  
  
    // Check if stack (heap) is full.Then inserting an element would lead to stack overflow  
    if (!temp) {  
        cout << "\nHeap Overflow";  
        exit(1);  
    }  
  
    // Initialize data into temp data field  
    temp->data = data;  
    // Put top pointer reference into temp link  
    temp->link = top;  
    // Make temp as top of Stack  
    top = temp;  
}

bool isEmpty() {
    if(top == NULL) return true;
    return false;
}
void Pop() {
    Node* temp;
    if(top == NULL) {
        cout<<"Underflow !"; exit(1);
    }
    temp=top;
    top = top->link;
    temp->link = NULL;
    free(temp);
}

void Display() {
    Node* temp;
    if(top == NULL) cout<<"Empty stack";
    else {
        temp = top;
        while( temp != NULL ) {
            cout<<temp->data<<" ";
            temp = temp->link;
        }
    }
}

int main()
{
    push(11);  
    push(22);  
    push(33);  
    push(44);  
  
    Display();
    Pop(); cout<<endl;
    Display();
    return 0;
}