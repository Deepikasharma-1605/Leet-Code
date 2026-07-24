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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode*dummy = new ListNode();
        ListNode*tail = dummy;
        for(int i = 0 ; i < lists.size() ; i++){
            if(lists[i] == NULL){
                continue;
            }
            tail->next = lists[i];
            while(tail->next != NULL){
                tail = tail->next;
            }
        }
        vector<int> arr;
        for(ListNode*curr = dummy->next ; curr!= NULL ; curr = curr->next){
            arr.push_back(curr->val);
        }
        sort(arr.begin() , arr.end());
        ListNode*ans = new ListNode();
        ListNode*end = ans;
        for(int i = 0 ; i < arr.size() ; i++){
            end->next = new ListNode(arr[i]);
            end = end->next;
        }
        return ans->next;
    }
};