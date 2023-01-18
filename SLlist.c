#include"SLlist.h"
void SLListPushBack(SLNode **pphead, SLDataType x)
{
	SLNode* tail = NULL;
	SLNode* newnode = BuySLTNode(x);
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
	printf("NULL\n");
}
SLNode* BuySLTNode(SLDataType x){
	SLNode *newnode = (SLNode*)malloc(sizeof(SLNode));
	if (newnode == NULL){
		perror("newnode:");
		exit(-1);
	}
	//开辟成功
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void SListPushFront(SLNode** pphead, SLDataType x)
{
	SLNode* newnode = BuySLTNode(x);
	//链表为空
	if (*pphead == NULL){
		*pphead = newnode;
	}
	//链表不为空,要改变头指针
	else{
		newnode->next = *pphead;
		*pphead = newnode;
	}
}
void SListPopBack(SLNode **pphead)
{
	//链表为空,不能删
	assert(*pphead != NULL);
	//链表只有一个元素,删除以后，需要置空plist
	if ((*pphead)->next == NULL){
		free(*pphead);
		*pphead = NULL;
	}
	//链表有两个及以上的数据
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
	//链表为空,程序停止
	assert(*pphead != NULL);
	//链表不为空
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
	//没找到，返回空指针
	return NULL;

}
void SListInsert(SLNode **pphead, SLNode* pos, SLDataType x)
{
	//pos为NULL
	assert(pos != NULL);
	SLNode* newnode = BuySLTNode(x);
	//在非第一个节点的位置插入数据
	if (pos != *pphead){
		//找到pos指向的节点的前一个节点
		SLNode *posPrev = *pphead;
		while (posPrev->next != pos){
			posPrev = posPrev->next;
		}
		posPrev->next = newnode;
		newnode->next = pos;
	}
	else{//在头节点插入新节点
		newnode->next = *pphead;
		*pphead = newnode;
	}
}