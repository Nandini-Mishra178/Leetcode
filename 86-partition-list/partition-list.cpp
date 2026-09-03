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
    ListNode* partition(ListNode* head, int x) {
     ListNode A(0), B(0);
     ListNode* bh=&A;
     ListNode* ah=&B;
     while(head){
     if(head->val<x){
        bh->next=head;
        bh=bh->next;
     }
     else {
        ah->next=head;
        ah=ah->next;
     }
     head=head->next;}
     ah->next= nullptr;
     bh->next=B.next;
     return A.next;
     }
};