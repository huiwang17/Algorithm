/**
Given the head of a linked list and a value x, partition it such that all nodes 
less than x come before nodes greater than or equal to x. 

 You should preserve the original relative order of the nodes in each of the 
two partitions. 

 
 Example 1: 

 
Input: head = [1,4,3,2,5,2], x = 3
Output: [1,2,2,4,3,5]
 

 Example 2: 

 
Input: head = [2,1], x = 2
Output: [1,2]
 

 
 Constraints: 

 
 The number of nodes in the list is in the range [0, 200]. 
 -100 <= Node.val <= 100 
 -200 <= x <= 200 
 
 Related Topics Linked List Two Pointers 👍 3328 👎 469

*/

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* partition(ListNode* head, int x) {
        ListNode* temp = new ListNode(0, head);
        ListNode* l = new ListNode(0);
        ListNode* p = temp, r = l;
        while(p->next){
            // move to another linked list
            if(p->next->val >= x){
                r->next = p->next;
                r = r->next;
                p->next = p->next->next;
            }
            p = p->next;
        }
        p->next = l->next;
        return temp->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
