/**
Given the root of a binary tree, return the number of uni-value subtrees. 

 A uni-value subtree means all nodes of the subtree have the same value. 

 
 Example 1: 

 
Input: root = [5,1,5,5,5,null,5]
Output: 4
 

 Example 2: 

 
Input: root = []
Output: 0
 

 Example 3: 

 
Input: root = [5,5,5,5,5,null,5]
Output: 6
 

 
 Constraints: 

 
 The number of the node in the tree will be in the range [0, 1000]. 
 -1000 <= Node.val <= 1000 
 
 Related Topics Tree Depth-First Search Binary Tree 👍 923 👎 294

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
    int countUnivalSubtrees(TreeNode* root) {
        
    }
};
//leetcode submit region end(Prohibit modification and deletion)
