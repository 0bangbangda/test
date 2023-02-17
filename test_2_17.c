/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */

struct Node* copyRandomList(struct Node* head) {
    struct Node *copy=head,*newhead=NULL,*newnode=NULL,*newtail=NULL,*phead=NULL;
    phead=(struct Node*)malloc(sizeof(struct Node));
    phead->next=NULL;
    newtail=phead;
    while(copy){//复制链表,尾插法
        newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->next=NULL;
        newnode->random=NULL;
        newnode->val=copy->val;
        newtail->next=newnode;
        newtail=newnode;
        copy=copy->next;
    }
    newhead=phead->next;
//给random指针赋值
struct Node *n1=head,*n2=newhead,*findN1=NULL,*findRand=NULL,*foot=NULL;
int findN1_int,findRand_int,gap;
while(n1){
    if(n1->random==NULL){
        n2->random=NULL;
        n1=n1->next;
        n2=n2->next;
    }
    else{
    findN1=head,findRand=head;
    findN1_int=0,findRand_int=0;
    while(findN1!=n1){
        findN1=findN1->next;
        findN1_int++;
    }
    while(findRand!=n1->random){
        findRand=findRand->next;
        findRand_int++;
    }
    if(findN1_int<findRand_int){
        gap=findRand_int-findN1_int;
        foot=n2;
        while(gap--){
          foot=foot->next;
        }
        n2->random=foot;
    }
    else{
        foot=newhead;
        while(findRand_int--){
foot=foot->next;
        }
        n2->random=foot;
    }
    n1=n1->next;
    n2=n2->next;
}
}
return newhead;
}
