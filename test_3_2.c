/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseBetween(struct ListNode* head, int left, int right){
    if(left==right)
    return head;
struct ListNode *dummy=(struct ListNode*)malloc(sizeof(struct ListNode));
dummy->next=head;
struct ListNode *Left,*Right,*prevLeft,*nextRight,*cur=dummy;
int k=0;
while(k<=right){
    if(k==left-1){
        prevLeft=cur;
        Left=cur->next;
    }
    if(k==right){
        Right=cur;
        nextRight=cur->next;
    }
    cur=cur->next;
    k+=1;
}
struct ListNode *newhead=NULL,*newtail=NULL,*next=Left->next;
Left->next=newhead;
newhead=Left;
newtail=Left;
Left=next;
while(Left!=nextRight){
    next=Left->next;
    Left->next=newhead;
    newhead=Left;
    Left=next;
}
newtail->next=nextRight;
prevLeft->next=newhead;
return dummy->next;
}
