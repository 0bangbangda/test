/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head==NULL){
        return head;
    }
struct ListNode *dommy=(struct ListNode*)malloc(sizeof(struct ListNode));
dommy->val=-1000;
struct ListNode *tail=dommy,*prevTail=NULL,*next=NULL;
int rep=-1000;
while(head){
    next=head->next;
    if(head->val==rep){
        head=next;
    }
    else if(head->val>tail->val){
        tail->next=head;
        tail=head;
        tail->next=NULL;
        head=next;
    }
    else{
        rep=head->val;
        prevTail=dommy;
        while(prevTail->next!=tail)
        prevTail=prevTail->next;
        tail=prevTail;
        tail->next=NULL;
        head=next;
    }
}
return dommy->next;
}
