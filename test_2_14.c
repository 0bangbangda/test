/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head){
// struct ListNode *left,*right,*preRight;
// left=right=head;
// //寻找尾节点
// while(right->next!=NULL){
//     right=right->next;
// }
// while(left->val==right->val&&left!=right){
//     //判断preRight是否等于left
//     //找到right前一个结点
//     preRight=head;
//     while(preRight->next!=right){
//         preRight=preRight->next;
//     }
//     if(preRight==left)
//     return true;
//     left=left->next;
//     right=preRight;
// }
// if(left==right){
//     return true;
// }
// return false;
//如果链表只有一个节点，则是回文结构
if(head->next==NULL){
    return true;
}
else{
    //链表有两个及以上的节点
    //寻找中间节点
    struct ListNode *slow=head,*fast=head,*head2,*next,*newhead=NULL;
    while(fast!=NULL&&fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    //逆序后半段
head2=slow;
while(head2){
next=head2->next;
head2->next=newhead;
newhead=head2;
head2=next;
}
//判断前半段和后半段是否满足会问结构
while(newhead&&head->val==newhead->val){
head=head->next;
newhead=newhead->next;
}
if(newhead==NULL){
return true;
}
else{
    return false;
}
}
}
