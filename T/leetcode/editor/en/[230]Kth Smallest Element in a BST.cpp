/**
Given the root of a binary search tree, and an integer k, return the kᵗʰ 
smallest value (1-indexed) of all the values of the nodes in the tree. 

 
 Example 1: 

 
Input: root = [3,1,4,null,2], k = 1
Output: 1
 

 Example 2: 

 
Input: root = [5,3,6,2,4,null,null,1], k = 3
Output: 3
 

 
 Constraints: 

 
 The number of nodes in the tree is n. 
 1 <= k <= n <= 10⁴ 
 0 <= Node.val <= 10⁴ 
 

 
 Follow up: If the BST is modified often (i.e., we can do insert and delete 
operations) and you need to find the kth smallest frequently, how would you 
optimize? 
 Related Topics Tree Depth-First Search Binary Search Tree Binary Tree 👍 6035 ?
? 120

*/

//leetcode submit region begin(Prohibit modification and deletion)
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
    int last;
    int visited;

    void dfs(TreeNode* root, int k){
        if(!root || visited >= k)
            return;
        if(root->left)
            dfs(root->left, k);
        if(visited >= k)
            return;
        visited += 1;
        last = root->val;
//        printf("[%d]th: %d (k: %d)\n", visited, last, k);
        if(visited == k)
            return;
        if(root->right)
            dfs(root->right, k);
    }

    int kthSmallest(TreeNode* root, int k) {
        dfs(root, k);
        return last;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
