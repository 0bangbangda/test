/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapPairs(struct ListNode* head){
if(head==NULL||head->next==NULL){
    return head;
}
else{
    struct ListNode *prev=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *n1=head,*n2=head->next,*next=NULL;
    int flag=2;
    head=head->next;
    while(n1&&n2){
        if(flag==2){
            prev->next=n2;
            next=n2->next;
            n1->next=next;
            n2->next=n1;
            flag=1;
        }
        else{
            prev->next=n1;
            next=n1->next;
            n2->next=next;
            n1->next=n2;
            flag=2;
        }
        if(n1->next==NULL||n2->next==NULL)
        return head;
        n1=n1->next->next;
        n2=n2->next->next;
        prev=prev->next->next;
    }
    return head;
}
}
