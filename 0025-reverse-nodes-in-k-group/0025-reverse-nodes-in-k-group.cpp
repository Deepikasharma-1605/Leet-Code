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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> arr;
        for(ListNode*curr = head ; curr!= NULL ; curr = curr->next){
            arr.push_back(curr->val);
        }
        for(int i = 0 ; i +k <= arr.size(); i +=k){
            reverse(arr.begin() + i , arr.begin() + i + k);
        }
        ListNode*dummy = new ListNode(0);
        ListNode*tail = dummy;
        for(int x : arr){
            tail->next = new ListNode(x);
            tail = tail->next;
        }
        return dummy->next;
    }
};