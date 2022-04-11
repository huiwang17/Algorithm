/**
Given an integer n, return all the strobogrammatic numbers that are of length n.
 You may return the answer in any order. 

 A strobogrammatic number is a number that looks the same when rotated 180 
degrees (looked at upside down). 

 
 Example 1: 
 Input: n = 2
Output: ["11","69","88","96"]
 Example 2: 
 Input: n = 1
Output: ["0","1","8"]
 
 
 Constraints: 

*/

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> formStrobogrammatic(int n, bool final){
        if(n == 0){
            return {""};
        }
        if(n == 1){
          return {"0", "1", "8"};
        }
        vector<pair<string, string>> pairs;
        pairs.push_back(pair<string, string>("0", "0"));
        pairs.push_back(pair<string, string>("1", "1"));
        pairs.push_back(pair<string, string>("6", "9"));
        pairs.push_back(pair<string, string>("8", "8"));
        pairs.push_back(pair<string, string>("9", "6"));
        vector<string> pre = formStrobogrammatic(n-2, false);
        vector<string> ans;

        int begin = final ? 1 : 0;
        for(int i = 0; i < pre.size(); i++){
            string s = pre[i];
            for(int j = begin; j < pairs.size(); j++){
                auto p = pairs[j];
                string temp = p.first + s + p.second;
                ans.push_back(temp);
            }
       }
       return ans;
    }

    vector<string> findStrobogrammatic(int n) {
        return formStrobogrammatic(n, 1);
    }
};
//leetcode submit region end(Prohibit modification and deletion)
