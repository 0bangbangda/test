#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int LTDataType;
typedef struct ListNode
{
	LTDataType val;
	struct ListNode *next;
	struct ListNode *prev;

}LTNode;
LTNode* ListInit(LTNode *phead);
void PushBack(LTNode *phead, LTDataType x);
void ListPrint(LTNode *phead);
void PushFront(LTNode *phead, LTDataType x);
void PopBack(LTNode *phead);
void PopFront(LTNode *phead);
LTNode* FindList(LTNode *phead, LTDataType x);
void InsertList(LTNode *phead, LTNode *pos, LTDataType x);
void EraseList(LTNode *phead, LTNode *pos);
void DestroyList(LTNode *phead);