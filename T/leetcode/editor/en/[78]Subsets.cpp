/**
Given an integer array nums of unique elements, return all possible subsets (
the power set). 

 The solution set must not contain duplicate subsets. Return the solution in 
any order. 

 
 Example 1: 

 
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
 

 Example 2: 

 
Input: nums = [0]
Output: [[],[0]]
 

 
 Constraints: 

 
 1 <= nums.length <= 10 
 -10 <= nums[i] <= 10 
 All the numbers of nums are unique. 
 
 Related Topics Array Backtracking Bit Manipulation 👍 9536 👎 153

*/

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> ans;

    void dfs(vector<int> &nums, int index, vector<int> subset){
        if(index >= nums.size()){
            ans.push_back(subset);
            return;
        }
        vector<int> next_subset = vector<int>(subset);
        next_subset.push_back(nums[index]);
        dfs(nums, index+1, next_subset);
        dfs(nums, index+1, subset);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        dfs(nums, 0, {});
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
