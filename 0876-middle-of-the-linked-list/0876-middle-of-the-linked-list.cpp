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
    ListNode* middleNode(ListNode* head) {
        int len = 0;
        ListNode*curr = head;
        while(curr != NULL){
            curr =  curr->next;
            len++;
        }
        int pos = 0;
        if(len % 2 != 0){
            pos = len/2;
        }else{
            pos = (len/2) ;
        }
        ListNode*temp = head;
        for(int i = 1 ; i <= pos ; i++){
            temp = temp->next;
        }
        return temp;
    }
};