#include"SLlist.h"
void SLListPushBack(SLNode **pphead, SLDataType x)
{
	SLNode* tail = NULL;
	SLNode *newnode = (SLNode*)malloc(sizeof(SLNode));
	if (newnode == NULL){
		perror("newnode:");
		exit(-1);
	}
	//开辟成功
	newnode->data = x;
	newnode->next = NULL;
	if (*pphead == NULL){
		*pphead = newnode;
	}
	//链表不为空，找尾节点
	else{
		tail = *pphead;
		while (tail->next != NULL){
			tail = tail->next;
		}
		//找到尾节点了
		tail->next = newnode;
	}
}
void SListPrint(SLNode* phead)
{
	SLNode *cur = phead;
	while (cur!=NULL){
		printf("%d->", cur->data);
		cur = cur->next;
	}
}