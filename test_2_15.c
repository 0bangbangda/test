/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    // if(headA==headB){
    //     return headA;
    // }
    // struct ListNode *nextB;
    // while(headA!=NULL){
    //    nextB=headB;
    //    while(nextB&&nextB!=headA){
    //        nextB=nextB->next;
    //    }
    //         if(nextB==NULL){
    //             headA=headA->next;
    //         }
    //         else{
    //             return headA;
    //         }
    //     }
    //     return NULL;
    //先找尾节点
    struct ListNode *tailA=headA,*tailB=headB;
    int lenA=1,lenB=1;
    while(tailA->next){
        tailA=tailA->next;
        lenA++;
    }
    while(tailB->next){
        tailB=tailB->next;
        lenB++;
    }
    //判断两链表是否相交
    if(tailA==tailB){//此时两个链表相交
    int gap=abs(lenA-lenB);
    struct ListNode *longList=headA;
    struct ListNode *shortList=headB;
    if(lenA<lenB){
        longList=headB;
        shortList=headA;
    }
    while(gap--){
        longList=longList->next;
    }
    while(longList!=shortList){
        longList=longList->next;
        shortList=shortList->next;
    }
    return longList;
    }
    else{
        return NULL;
    }

    }
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    // if(head==NULL){
    //     return false;
    // }
    // struct ListNode *fast=head->next,*slow=head;
    // while(fast!=slow){
    //     if(fast==NULL||fast->next==NULL){
    //         return false;
    //     }
    //     fast=fast->next->next;
    //     slow=slow->next;
    // }
    // return true;
    if(head==NULL){
        return false;
    }
    struct ListNode *tail=head;
    struct ListNode **newnode=(struct ListNode**)malloc(sizeof(struct ListNode*));
    int capacity=0;
    *newnode=NULL;
    while(tail){
for(int i=0;i<=capacity;i++){
    if(tail==newnode[i]){
        return true;
    }
}
newnode[capacity]=tail;
capacity++;
struct ListNode **ptr=realloc(newnode,sizeof(struct ListNode*)*(capacity+1));
if(ptr){
newnode=ptr;
}
else{
    perror("realloc:");
}
newnode[capacity]=NULL;
tail=tail->next;
    }
return false;
}
