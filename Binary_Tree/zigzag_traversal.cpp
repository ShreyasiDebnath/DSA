// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
/*
      1
    /  \
   2    3
  / \  / \
 4  5 6   7
[[1],[3,2],[4,5,6,7]]
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> r;
    if(root==NULL) return r;
    queue<TreeNode*> nq;
    nq.push(root);
    bool ltr=true;
    while(!nq.empty()){
        int s=nq.size();
        vector<int> v(s);
        for(int i=0;i<s;i++){
           TreeNode* node =nq.front();
            nq.pop();
            int index= (ltr)? i:(s-1-i);
            v[index] = node -> val;
            if(node->left){
                nq.push(node->left);
            }
            if(node->right){
                nq.push(node->right);
            }
            
            
        }
        ltr=!ltr;
        r.push_back(v);
        
    }
    return r;
        
    }
};
