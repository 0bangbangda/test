#include"List.h"
void test1();
void test2();
void test3();
void test4();
int main(void){
	//test1();
	test2();
	//test3();
	//test4();
	return EXIT_SUCCESS;
}
void test1(){
	LTNode *plist = NULL;
	plist = ListInit(plist);
}
void test2(){
	LTNode *plist = NULL;
	plist = ListInit(plist);
	PushBack(plist, 1);
	PushBack(plist, 2);
	PushBack(plist, 3);
	PushBack(plist, 4);
	ListPrint(plist);
	PushFront(plist, 1);
	PushFront(plist, 2);
	PushFront(plist, 3);
	PushFront(plist, 4);
	ListPrint(plist);
	DestroyList(plist);
	plist = NULL;
	//LTNode *pos = FindList(plist, 1);
	//InsertList(plist,plist, 5);
	//EraseList(plist, pos);
	//ListPrint(plist);
}
void test3(){
	LTNode *plist = NULL;
	plist = ListInit(plist);
	PushFront(plist, 1);
	PushFront(plist, 2);
	PushFront(plist, 3);
	PushFront(plist, 4);
	ListPrint(plist);
	PopBack(plist);
	PopBack(plist);
	ListPrint(plist);
}
void test4(){
	LTNode *plist = NULL;
	plist = ListInit(plist);
	PushFront(plist, 1);
	PushFront(plist, 2);
	PushFront(plist, 3);
	PushFront(plist, 4);
	ListPrint(plist);
	PopFront(plist);
	PopFront(plist);
	PopFront(plist);
	PopFront(plist);
	ListPrint(plist);
}