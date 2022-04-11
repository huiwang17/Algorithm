/**
Given an array of intervals where intervals[i] = [starti, endi], merge all 
overlapping intervals, and return an array of the non-overlapping intervals that 
cover all the intervals in the input. 

 
 Example 1: 

 
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
 

 Example 2: 

 
Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
 

 
 Constraints: 

 
 1 <= intervals.length <= 10⁴ 
 intervals[i].length == 2 
 0 <= starti <= endi <= 10⁴ 


*/

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    static bool cmp(vector<int> a, vector<int> b){
        return a[0] < b[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty())
            return {};
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end(), cmp);
        int l1 = intervals[0][0], r1 = intervals[0][1];
        for(int i = 0; i < intervals.size(); i++){
            int l2 = intervals[i][0];
            int r2 = intervals[i][1];
            if(r1 >= l2){
                l1 = min(l1, l2);
                r1 = max(r1, r2);
            } else {
                ans.push_back({l1, r1});
                l1 = l2;
                r1 = r2;
            }
        }
        ans.push_back({l1, r1});
        return ans;
    }

};
//leetcode submit region end(Prohibit modification and deletion)
