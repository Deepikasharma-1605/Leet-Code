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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL){
            return NULL;
        }
        if(k == 0) return head;
        vector<int> ans;
        for(ListNode*curr = head ; curr != NULL ; curr = curr->next){
            ans.push_back(curr->val);
        }
        int n = ans.size();
        vector<int> arr(n);
        for(int i = n-1 ; i >= 0 ; i--){
            arr[(i + k) % n] = ans[i];
        }
        ListNode*dummy = new ListNode();
        ListNode*tail = dummy;
        for(int i = 0 ; i < arr.size() ; i++){
            tail->next = new ListNode(arr[i]);
            tail = tail->next;
        }
        return dummy->next;
    }
};