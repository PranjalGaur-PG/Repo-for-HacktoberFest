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
    Node* left;
    Node* right;
};

Node* GetNewNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* Insert(Node* root,int data) {
    if(root==NULL) root=GetNewNode(data);
    else if(data <= root->data) root->left = Insert(root->left,data);
    else root->right = Insert(root->right,data);
    return root;
}

bool Search(Node* root,int data) {
    if(root == NULL) return false;
    else if(root->data == data) return true;
    else if(data <= root->data) return Search(root->left,data);
    else return Search(root->right,data);
}

int Height(Node* root) {
    if(root == NULL) return -1;
    else return (1 + max( Height(root->left) , Height(root->right)));
}

int main()
{
    Node* Root=NULL;
    Root = Insert(Root,15);
    Root = Insert(Root,10);
    Root = Insert(Root,20);
    Root = Insert(Root,88);
    Root = Insert(Root,5);
    int n;
    cin>>n;
    if(Search(Root,n)) cout<<"Found";
    else cout<<"Not Found";
    cout<<"\nHeight of tree is = "<<Height(Root);
    return 0;
}