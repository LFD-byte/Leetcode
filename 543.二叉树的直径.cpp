/*
 * @lc app=leetcode.cn id=543 lang=cpp
 *
 * [543] 二叉树的直径
 */

// @lc code=start
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
    int max_len = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr) return 0;

        
        int max_left = diameterOfBinaryTree(root->left);
        if(root->left != nullptr) max_left++;

        int max_right = diameterOfBinaryTree(root->right);
        if (root->right != nullptr) max_right++;
        
        if (max_left + max_right > max_len) max_len = max_left + max_right;
        return max_len;
    }
};
// class Solution {
//     int ans;
//     int depth(TreeNode* rt){
//         if (rt == NULL) {
//             return 0; // 访问到空节点了，返回0
//         }
//         int L = depth(rt->left); // 左儿子为根的子树的深度
//         int R = depth(rt->right); // 右儿子为根的子树的深度
//         ans = max(ans, L + R + 1); // 计算d_node即L+R+1 并更新ans
//         return max(L, R) + 1; // 返回该节点为根的子树的深度
//     }
// public:
//     int diameterOfBinaryTree(TreeNode* root) {
//         ans = 1;
//         depth(root);
//         return ans - 1;
//     }
// };
// @lc code=end

