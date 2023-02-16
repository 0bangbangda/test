/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* reversePrint(struct ListNode* head, int* returnSize){
struct ListNode *tail=head;
int capacity=0,left,right;
int *arr=NULL;
while(tail){
    int *ptr=(int*)realloc(arr,sizeof(int)*(capacity+1));
    if(ptr){
        arr=ptr;
    }
    arr[capacity]=tail->val;
    capacity+=1;
    tail=tail->next;
}
left=0,right=capacity-1;
while(left<=right){
    int tmp=arr[left];
    arr[left]=arr[right];
    arr[right]=tmp;
    left++,right--;
}
*returnSize=capacity;
return arr;
}

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
else{
    struct ListNode *n1=head,*n2=head->next;
    while(n2){
        if(n1->val==n2->val){
            n1->next=n2->next;
            n2=n2->next;
        }
        else{
            n1=n1->next;
            n2=n2->next;
        }
    }
}
return head;
}
struct ListNode *newhead=NULL,*next=NULL,*tail;
int size=0;
int *arr=NULL;
while(head){
    next=head->next;
    head->next=newhead;
    newhead=head;
    head=next;
}
tail=newhead;
while(tail){
    arr=(int*)realloc(arr,sizeof(int)*(size+1));
    arr[size]=tail->val;
    size++;
    tail=tail->next;
}
*returnSize=size;
return arr;
