/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverse(struct ListNode *newhead,struct ListNode **cur,int n){
    struct ListNode *next;
    while(n--&&(*cur)){
    next=(*cur)->next;
    (*cur)->next=newhead;
    newhead=*cur;
    (*cur)=next;
    }
    return newhead;
}
struct ListNode* rotateRight(struct ListNode* head, int k){
if(head==NULL||head->next==NULL)
return head;
else{
    struct ListNode *newhead1=NULL,*newhead2=NULL,*newhead3=NULL;
    struct ListNode *cur=head;
    int length=0,move;
    while(cur){
        length++;
        cur=cur->next;
    }
    cur=head;
    newhead1=reverse(newhead1,&cur,length-k%length);
    newhead2=reverse(newhead2,&cur,k%length);
    cur=newhead1;
    newhead3=reverse(newhead3,&cur,length-k%length);
    cur=newhead2;
    /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* rotateRight(struct ListNode* head, int k){
if(k==0||head==NULL||head->next==NULL)
return head;
int length=1;
struct ListNode *tail=head;
while(tail->next){
    length++;
    tail=tail->next;
}
int move=length-k%length;
if(move==0){
    return head;
}
tail->next=head;
struct ListNode *cur=tail,*newHead;
while(move--){
    cur=cur->next;
}
newHead=cur->next;
cur->next=NULL;
return newHead;
}
    newhead3=reverse(newhead3,&cur,k%length);
    return newhead3;
}
}
