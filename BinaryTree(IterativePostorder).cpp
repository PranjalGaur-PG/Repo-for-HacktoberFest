#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };


class Solution {
public:
    // Method 1 - Using 2 STACKS !!

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> s1,s2;
        if(root == NULL) return ans;
        s1.push(root); 
        while(s1.size() != 0) {
            TreeNode* t = s1.top();
            s1.pop();
            if(t->left != NULL) s1.push(t->left);
            if(t->right!= NULL) s1.push(t->right);
            s2.push(t);
        }
        while(s2.size() != 0) {
            ans.push_back(s2.top()->val);
            s2.pop();
        }
        return ans;
    }

    // Method 2 - Using 1 STACK !!
};

int main() {
    return 0;
}