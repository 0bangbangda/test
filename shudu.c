#include"game2.h"
int main(void){
	int input;
	do{
		printf("请选择:>\n");
		menu();
		scanf("%d", &input);
		switch (input){
		case 1:
			test();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
		}
	} while (input);
	return EXIT_SUCCESS;
}