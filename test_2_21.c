/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
int length1=1,length2=1,gap;
struct ListNode *cur1=l1,*cur2=l2,*shortList;
while(cur1->next){
    length1++;
    cur1=cur1->next;
}
while(cur2->next){
    length2++;
    cur2=cur2->next;
}
if(length1>length2){
    shortList=cur2;
}
else{
    shortList=cur1;
}
//补充节点,尾插节点
struct ListNode *newnode=NULL;
gap=abs(length1-length2);
while(gap--){
    newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
    newnode->val=0;
    shortList->next=newnode;
    shortList=newnode;
    shortList->next=NULL;
}
//此时两个链表等长
struct ListNode *adv=(struct ListNode*)malloc(sizeof(struct ListNode));
struct ListNode *phead=(struct ListNode*)malloc(sizeof(struct ListNode));
struct ListNode *tail=phead;
adv->next=NULL;
adv->val=0;
cur1=l1,cur2=l2;
while(cur1){
     newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
    if(cur1->val+cur2->val+adv->val>=10){
        newnode->val=cur1->val+cur2->val+adv->val-10;
        adv->val=1;
        //尾插
        tail->next=newnode;
        tail=newnode;
        tail->next=NULL;
        cur1=cur1->next;
        cur2=cur2->next;
    }
    else{
        newnode->val=cur1->val+cur2->val+adv->val;
        adv->val=0;
        tail->next=newnode;
        tail=newnode;
        tail->next=NULL;
        cur1=cur1->next;
        cur2=cur2->next;
    }
}
if(adv->val){
    tail->next=adv;
    tail=adv;
}
return phead->next;
}
