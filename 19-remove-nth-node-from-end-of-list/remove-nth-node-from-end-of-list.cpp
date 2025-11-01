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
     
       ListNode* dumm = new ListNode(0);
       dumm->next=head;
        ListNode* fast=dumm;
        ListNode* slow=dumm;
        for(int i=0;i<=n;i++){
            fast=fast->next;
        }
        while(fast !=nullptr){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* newdelete= slow->next;
        slow->next = slow->next->next;
        delete newdelete; 
        return dumm->next;

    }
};