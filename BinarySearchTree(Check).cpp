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

// bool CheckBST(Node* root) {
//     if(root == NULL) return true;
//     if(root->left != NULL) {
//         if(root->data < root->left->data) return false;
//         else return CheckBST(root->left);
//     }
//     if(root->right != NULL) {
//         if(root->data > root->right->data) return false;
//         else return CheckBST(root->right);
//     }
// }

bool IsBstUtil(Node* root,int maxValue,int minValue) {
    if(root == NULL) return true;
    if( root->data < minValue && root->data > maxValue && IsBstUtil(root->left,minValue,root->data) && IsBstUtil(root->right,root->data,maxValue) )  return true;
    else return false;
}

bool IsBST(Node* root) {
    return IsBstUtil(root, INT_MIN, INT_MAX);
}

Node* InsertNewNode(Node* root,int data) {
    if(root == NULL) {
        root = new Node();
        root->data = data;
        root->left = root->right = NULL;
    }
    else if(data <= root->data) root->left = Insert(root->left,data);
	else root->right = Insert(root->right,data);
	return root;

}

int main()
{
    Node* root = NULL;
    return 0;
}