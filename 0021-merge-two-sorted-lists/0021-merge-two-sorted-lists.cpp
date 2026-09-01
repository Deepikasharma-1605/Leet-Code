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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> arr;
        for(ListNode*curr = list1 ; curr != NULL ; curr = curr->next){
            arr.push_back(curr->val);
        }
        for(ListNode*curr = list2 ; curr != NULL ; curr = curr->next){
            arr.push_back(curr->val);
        }
        sort(arr.begin() , arr.end());
        ListNode*dummy = new ListNode(0);
        ListNode*tail = dummy;
        for(int x : arr){
            tail->next = new ListNode(x);
            tail = tail ->next;
        }
        return dummy->next;
    }
};