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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*curr = head;
        int len = 0;
        while(curr != NULL){
            curr=curr->next;
            len++;
        }
        vector<int> arr;
        for(ListNode*temp = head; temp != NULL ; temp = temp->next){
            arr.push_back(temp->val);
        }
        arr.erase(arr.begin() + ((len - n) ));
        ListNode*dummy = new ListNode(0);
        ListNode*tail = dummy;
        for(int x : arr){
            tail->next = new ListNode(x);
            tail = tail->next;
        }
        return dummy->next;
    }
};