/*
* 方法一 非递归。 利用栈
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> nodes;
        vector<int> res;
        nodes.push(root);
        TreeNode* node = nullptr;
        while(!nodes.empty())
        {
            node = nodes.top();
            nodes.pop();
            if(node != nullptr)
            {
                res.push_back(node->val);
                nodes.push(node->right);
                nodes.push(node->left);
            }
        }
        return res;
    }
};


/*
* 方法二 递归，深度优先遍历
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        dfs(root);
        return result;

    }
    vector<int> result;
    void dfs(TreeNode* root)
    {
        if(root==NULL) return;
        result.push_back(root->val);
        dfs(root->left);
        dfs(root->right);
    }
};
                res.push_back(node->val);
