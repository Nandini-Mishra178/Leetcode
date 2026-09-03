/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *e=head;
        if(head==NULL) return nullptr;
        while(fast->next!=NULL && fast->next->next!=NULL){
             slow=slow->next;
             fast=fast->next->next;
             if(slow==fast){
                while(e!=slow){
                     e=e->next;
                    slow=slow->next;}
                    return e;
             }
        }
  return nullptr;  }
};