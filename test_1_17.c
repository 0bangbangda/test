#include"SLlist.h"
void SLlistTest(){
	SLNode* plist = NULL;
	SLListPushBack(&plist, 1);
	SLListPushBack(&plist, 2);
	SLListPushBack(&plist, 3);
	SLListPushBack(&plist, 4);
	SListPrint(plist);
}
int main(void){
	SLlistTest();
	return EXIT_SUCCESS;
}