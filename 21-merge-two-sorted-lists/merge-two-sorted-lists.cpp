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
        ListNode A(0);
        ListNode* a=&A;
        while(list1 && list2){
            if(list1->val<=list2->val){
                a->next=list1;
                list1=list1->next;
            }
            else{
                a->next=list2;
                list2=list2->next;
            }
            a=a->next;
        }
        if(list1){
            a->next=list1;
        }
        else{
            a->next=list2;
        }
    return A.next;}
};