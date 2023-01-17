#include"SLlist.h"
void SLListPushBack(SLNode **pphead, SLDataType x)
{
	SLNode* tail = NULL;
	SLNode *newnode = (SLNode*)malloc(sizeof(SLNode));
	if (newnode == NULL){
		perror("newnode:");
		exit(-1);
	}
	//���ٳɹ�
	newnode->data = x;
	newnode->next = NULL;
	if (*pphead == NULL){
		*pphead = newnode;
	}
	//����Ϊ�գ���β�ڵ�
	else{
		tail = *pphead;
		while (tail->next != NULL){
			tail = tail->next;
		}
		//�ҵ�β�ڵ���
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