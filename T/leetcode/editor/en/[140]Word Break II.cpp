/**
Given a string s and a dictionary of strings wordDict, add spaces in s to 
construct a sentence where each word is a valid dictionary word. Return all such 
possible sentences in any order. 

 Note that the same word in the dictionary may be reused multiple times in the 
segmentation. 

 
 Example 1: 

 
Input: s = "catsanddog", wordDict = ["cat","cats","and","sand","dog"]
Output: ["cats and dog","cat sand dog"]
 

 Example 2: 

 
Input: s = "pineapplepenapple", wordDict = ["apple","pen","applepen","pine",
"pineapple"]
Output: ["pine apple pen apple","pineapple pen apple","pine applepen apple"]
Explanation: Note that you are allowed to reuse a dictionary word.
 

 Example 3: 

 
Input: s = "catsandog", wordDict = ["cats","dog","sand","and","cat"]
Output: []
 

 
 Constraints: 

 
 1 <= s.length <= 20 
 1 <= wordDict.length <= 1000 
 1 <= wordDict[i].length <= 10 
 s and wordDict[i] consist of only lowercase English letters. 
 All the strings of wordDict are unique. 


*/

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> ans;

    void dfs(string s, vector<string> &dict, int index, vector<string>& v){
        if(index > s.size()) return;
        if(index == s.size()) {
            string temp = "";
            for(int i = 0; i < v.size(); i++){
                temp += (i ? " " : "") + v[i];
            }
            ans.push_back(temp);
        }
        for(auto prefix: dict){
            int len = prefix.length();
            if(s.compare(index, len, prefix) == 0){
                vector<string> next_v = vector<string>(v);
                next_v.push_back(prefix);
                dfs(s, dict, index+len, next_v);
            }
        }
    }

    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string> v;
        dfs(s, wordDict, 0, v);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
