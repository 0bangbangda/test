#include"game2.h"
int main(void){
	int input;
	do{
		printf("��ѡ��:>\n");
		menu();
		scanf("%d", &input);
		switch (input){
		case 1:
			test();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}
	} while (input);
	return EXIT_SUCCESS;
}