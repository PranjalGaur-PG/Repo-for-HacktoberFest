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

Node* FindMin(Node* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}

Node* Delete(Node* root,int data) {
    if(root == NULL) return root;
    else if(data < root->data) root->left = Delete(root->left, data);
    else if(data > root->data) root->right = Delete(root->right, data);
    else {
        // Case 1: No child
        if(root->left == NULL && root->right == NULL) {
            delete root;
            root = NULL;
            return root;
        }
        // Case 2: One child
        else if(root->left == NULL) {
            Node* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL) {
            Node* temp = root;
            root = root->left;
            delete temp;
        }
        // Case 3: Two Children
        else {
            Node* temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
        }
    }
    return root;
}

void Inorder(Node* root) {
    if(root == NULL) return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

int main()
{
    Node* root = NULL;
    root = Insert(root,5); root = Insert(root,10);
	root = Insert(root,3); root = Insert(root,4); 
	root = Insert(root,1); root = Insert(root,11);
    cout<<"Inorder - \n";
    Inorder(root);
    Delete(root,5);
    cout<<endl<<"Inorder after delting 5 -\n";
    Inorder(root);
    return 0;
}