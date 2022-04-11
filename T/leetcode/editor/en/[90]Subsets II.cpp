/**
Given an integer array nums that may contain duplicates, return all possible 
subsets (the power set). 

 The solution set must not contain duplicate subsets. Return the solution in 
any order. 

 
 Example 1: 
 Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
 Example 2: 
 Input: nums = [0]
Output: [[],[0]]
 
 
 Constraints: 

 
 1 <= nums.length <= 10 
 -10 <= nums[i] <= 10 
 
 Related Topics Array Backtracking Bit Manipulation 👍 4728 👎 147

*/

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> ans;
    map<vector<int>, bool> vis;

    void dfs(vector<int> &nums, int index, vector<int> subset){
        if(index >= nums.size()){
            if(!vis[subset])
                ans.push_back(subset);
            vis[subset] = 1;
            return;
        }
        vector<int> next_subset = vector<int>(subset);
        next_subset.push_back(nums[index]);
        dfs(nums, index+1, next_subset);
        dfs(nums, index+1, subset);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        dfs(nums, 0, {});
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
