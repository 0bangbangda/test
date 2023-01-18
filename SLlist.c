#include"SLlist.h"
void SLListPushBack(SLNode **pphead, SLDataType x)
{
	SLNode* tail = NULL;
	SLNode* newnode = BuySLTNode(x);
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
	printf("NULL\n");
}
SLNode* BuySLTNode(SLDataType x){
	SLNode *newnode = (SLNode*)malloc(sizeof(SLNode));
	if (newnode == NULL){
		perror("newnode:");
		exit(-1);
	}
	//���ٳɹ�
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void SListPushFront(SLNode** pphead, SLDataType x)
{
	SLNode* newnode = BuySLTNode(x);
	//����Ϊ��
	if (*pphead == NULL){
		*pphead = newnode;
	}
	//����Ϊ��,Ҫ�ı�ͷָ��
	else{
		newnode->next = *pphead;
		*pphead = newnode;
	}
}
void SListPopBack(SLNode **pphead)
{
	//����Ϊ��,����ɾ
	assert(*pphead != NULL);
	//����ֻ��һ��Ԫ��,ɾ���Ժ���Ҫ�ÿ�plist
	if ((*pphead)->next == NULL){
		free(*pphead);
		*pphead = NULL;
	}
	//���������������ϵ�����
	else{
		SLNode *tail = *pphead;
		while (tail->next->next != NULL){
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}
void SListPopFront(SLNode **pphead)
{
	//����Ϊ��,����ֹͣ
	assert(*pphead != NULL);
	//����Ϊ��
	SLNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}
SLNode* SListFind(SLNode *phead, SLDataType x)
{
	SLNode *pos = phead;
	while (pos){
		if ((pos->data) == x){
			return pos;
		}
		else{
			pos = pos->next;
		}
	}
	//û�ҵ������ؿ�ָ��
	return NULL;

}
void SListInsert(SLNode **pphead, SLNode* pos, SLDataType x)
{
	//posΪNULL
	assert(pos != NULL);
	SLNode* newnode = BuySLTNode(x);
	//�ڷǵ�һ���ڵ��λ�ò�������
	if (pos != *pphead){
		//�ҵ�posָ��Ľڵ��ǰһ���ڵ�
		SLNode *posPrev = *pphead;
		while (posPrev->next != pos){
			posPrev = posPrev->next;
		}
		posPrev->next = newnode;
		newnode->next = pos;
	}
	else{//��ͷ�ڵ�����½ڵ�
		newnode->next = *pphead;
		*pphead = newnode;
	}
}