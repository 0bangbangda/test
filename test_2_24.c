/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    if(head->next==NULL){
        return NULL;
    }
struct ListNode *slow,*fast,*prevSlow,*phead;
phead=(struct ListNode*)malloc(sizeof(struct ListNode));
phead->next=head;
prevSlow=(struct ListNode*)malloc(sizeof(struct ListNode));
prevSlow->next=phead;
slow=fast=phead;
while(n--){
if(fast==NULL){
    return NULL;
}
fast=fast->next;
}
while(fast){
    fast=fast->next;
    slow=slow->next;
    prevSlow=prevSlow->next;
}
if(slow==head){
head=head->next;
}
else{
    prevSlow->next=slow->next;
}
return head;
}
