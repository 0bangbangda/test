#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int SLDataType;
typedef struct SLNode
{
	SLDataType data;
	struct SLNode* next;
}SLNode;
void SLListPushBack(SLNode **pphead, SLDataType x);
void SListPrint(SLNode* phead);