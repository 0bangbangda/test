#include"SLlist.h"
void SLlistTest(){
	SLNode* plist = NULL;
	SLListPushBack(&plist, 1);
	SLListPushBack(&plist, 2);
	SLListPushBack(&plist, 3);
	SLListPushBack(&plist, 4);
	SListPrint(plist);
}
void SLlistTest2()
{
	SLNode* plist = NULL;
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SListPrint(plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPrint(plist);
	//SListPopBack(&plist);
}
void SListTest3()
{
	SLNode* plist = NULL;
	SLListPushBack(&plist, 1);
	SLListPushBack(&plist, 2);
	SLListPushBack(&plist, 3);
	SLListPushBack(&plist, 4);
	SListPrint(plist);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPrint(plist);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPrint(plist);
	//SListPopFront(&plist);
}
void SListTest4(){
	SLNode* plist = NULL;
	SLListPushBack(&plist, 1);
	SLListPushBack(&plist, 2);
	SLListPushBack(&plist, 3);
	SLListPushBack(&plist, 4);
	SListPrint(plist);
	SLNode *pos = SListFind(plist, 3);
	SListInsert(&plist, pos, 30);
	SLNode *pos2 = SListFind(plist, 1);
	SListInsert(&plist, pos2, 10);
	SListPrint(plist);
	SLNode *pos3 = SListFind(plist, 4);
	SListInsert(&plist, pos3, 40);
	SListPrint(plist);
}
int main(void){
	//SLlistTest();
	//SLlistTest2();
	//SListTest3();
	SListTest4();
	return EXIT_SUCCESS;
}