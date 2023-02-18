/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *fast=head,*slow=head;
    while(fast&&fast->next){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
struct ListNode *meet=slow;
struct ListNode *phead=head;
while(phead!=meet){
    phead=phead->next;
    meet=meet->next;
}
return meet;
        }
    }
    return NULL;
}
