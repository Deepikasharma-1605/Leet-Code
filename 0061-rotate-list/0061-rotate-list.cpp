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
        vector<int> arr;
        for(ListNode*curr = head ; curr != NULL ; curr = curr->next){
            arr.push_back(curr->val);
        }
        int n = arr.size();
        vector<int> ans(n);
        for(int i = 0 ; i < arr.size() ; i++){
            ans[(i + k) % n] = arr[i];
        }
        for(int i = 0 ; i < n ; i++){
            cout << ans[i];
        }
        ListNode*dummy = new ListNode(0);
        ListNode*tail = dummy;
        for(int x : ans){
            tail->next = new ListNode(x);
            tail = tail->next;
        }
        return dummy->next;
    }
};