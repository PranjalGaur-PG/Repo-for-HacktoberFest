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
    char data;
    Node* left;
    Node* right;
};

void MovePreorder(Node* root) {
	if(root == NULL) return;
	cout<<root->data<<" ";
	MovePreorder(root->left);
	MovePreorder(root->right);
}

void MoveInorder(Node* root) {
	if(root == NULL) return;
	MoveInorder(root->left);
	cout<<root->data<<" ";
	MoveInorder(root->right);
}

void MovePostorder(Node* root) {
	if(root == NULL) return;
	MovePostorder(root->left);
	MovePostorder(root->right);
	cout<<root->data<<" ";
}

// Function to Insert Node in a Binary Search Tree
Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data) root->left = Insert(root->left,data);
	else root->right = Insert(root->right,data);
	return root;
}

int main() {
	/*Code To Test the logic
	  Creating an example tree
	            M
			   / \
			  B   Q
			 / \   \
			A   C   Z
    */
	Node* root = NULL;
	root = Insert(root,'M'); root = Insert(root,'B');
	root = Insert(root,'Q'); root = Insert(root,'Z'); 
	root = Insert(root,'A'); root = Insert(root,'C');
	//Print Nodes in Level Order. 
	MovePreorder(root); 
	cout<<endl;
	MoveInorder(root);
	cout<<endl;
	MovePostorder(root);
}