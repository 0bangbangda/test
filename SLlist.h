#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLDataType;
typedef struct SLNode
{
	SLDataType data;
	struct SLNode* next;
}SLNode;
void SLListPushBack(SLNode **pphead, SLDataType x);
void SListPrint(SLNode* phead);
SLNode* BuySLTNode(SLDataType x);
void SListPushFront(SLNode** pphead, SLDataType x);
void SListPopBack(SLNode **pphead);
void SListPopFront(SLNode **pphead);
SLNode* SListFind(SLNode *pphead,SLDataType x);
void SListInsert(SLNode **pphead,SLNode* pos, SLDataType x);
void SListEraser(SLNode **pphead, SLNode **ppos);