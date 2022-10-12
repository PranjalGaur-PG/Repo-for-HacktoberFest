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

bool Search(Node* root,int data) {
    if(root == NULL) return false;
    else if(root->data == data) return true;
    else if(data <= root->data) return Search(root->left,data);
    else return Search(root->right,data);
}

Node* GetSuccessor(Node* root,int data) {
    Node* current = Search(root,data);
    if(current == NULL) return NULL;
    if(current->right != NULL) {
        // Case 1 : Node has right subtree
        return FindMin(current->right);
    }
    else {
        // Case 2 : No right subtree
        Node* successor = NULL;
        Node* ancestor = root;
        while(ancestor != current) {
            if(current->data < ancestor->data) {
                successor = ancestor;
                ancestor = ancestor->left;
            }
            else ancestor = ancestor->right;
        }
        return ancestor; 
    }
}

void Inorder(Node *root) {
	if(root == NULL) return;
 
	Inorder(root->left);       
	printf("%d ",root->data);  
	Inorder(root->right);      
}

int main()
{
    /*Code To Test the logic
	  Creating an example tree
	                    5
			   / \
			  3   10
			 / \   \
			1   4   11
    */
	Node* root = NULL;
	root = Insert(root,5); root = Insert(root,10);
	root = Insert(root,3); root = Insert(root,4); 
	root = Insert(root,1); root = Insert(root,11);
    
    cout<<"Inorder Traversal: ";
	Inorder(root);
	cout<<"\n";

    // Find Inorder successor of some node. 
	struct Node* successor = GetSuccessor(root,1);
	if(successor == NULL) cout<<"No successor Found\n";
	else                  cout<<"Successor is "<<successor->data<<"\n";
    return 0;
}