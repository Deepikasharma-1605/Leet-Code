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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int num1 = 0;
        int num2 = 0;
        vector<int> arr1;
        vector<int> arr2;
        for(ListNode*curr = l1 ; curr != NULL ; curr = curr->next){
            arr1.push_back(curr->val);
        }
        for(ListNode*curr = l2 ; curr != NULL ; curr = curr->next){
            arr2.push_back(curr->val);
        }
        vector<int> result;
        int n = max(arr1.size(), arr2.size());
        int carry =0;
        for(int i =0;i<n;i++){
            int sum =carry;
            if(i<arr1.size()){
                sum+=arr1[i];
            }
            if(i<arr2.size()){
                sum+=arr2[i];
            }
            result.push_back(sum%10);
            
            
            carry = sum / 10;
        }
        if(carry > 0){
            result.push_back(carry);
        }
        ListNode*dummy = new ListNode(0);
        ListNode*tail = dummy;
        for(int x : result){
            tail->next = new ListNode(x);
            tail = tail->next;
        }
        return dummy->next;
    }
};