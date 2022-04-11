/**
Given an integer array of size n, find all elements that appear more than ⌊ n/3 
⌋ times. 

 
 Example 1: 

 
Input: nums = [3,2,3]
Output: [3]
 

 Example 2: 

 
Input: nums = [1]
Output: [1]
 

 Example 3: 

 
Input: nums = [1,2]
Output: [1,2]
 

 
 Constraints: 

 
 1 <= nums.length <= 5 * 10⁴ 
 -10⁹ <= nums[i] <= 10⁹ 
 

 
 Follow up: Could you solve the problem in linear time and in O(1) space? 
 Related Topics Array Hash Table Sorting Counting 👍 4596 👎 272

*/

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> cnt;
        for(int i = 0; i < nums.size(); i++){
            cnt[nums[i]] = cnt[nums[i]] + 1;
        }
        vector<int> ans;
        for(auto it = cnt.begin(); it != cnt.end(); it++){
            int val = it->first;
            int times = it->second;
            if(times > nums.size() / 3){
                ans.push_back(val);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
