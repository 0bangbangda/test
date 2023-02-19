if(head==NULL){
    return NULL;
}
struct Node *copy=NULL,*copyhead=head;
while(copyhead){
    copy=(struct Node*)malloc(sizeof(struct Node));
    copy->val=copyhead->val;
    copy->next=copyhead->next;
    copyhead->next=copy;
    copyhead=copy->next;
}
struct Node *cur=head;
while(cur){
    if(cur->random==NULL){
        cur->next->random=NULL;
    }
    else{
        cur->next->random=cur->random->next;
    }
    cur=cur->next->next;
}
copyhead=head->next;
struct Node *n1=head,*n2=copyhead;
while(n2->next){
n1->next=n2->next;
n2->next=n2->next->next;
n1=n1->next;
n2=n2->next;
}
n1->next=NULL;
return copyhead;
