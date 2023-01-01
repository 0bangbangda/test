#include"contact.h"
enum option{Add=1,Del,Search,Modify,Show,Sort,Exit=0};

int main(void){
	struct contact con;
	InitContact(&con);
	enum option input;

	do{
		//menu();
		
		printf("«Î—°‘Ò:\n");
		menu();
		scanf("%d", &input);
		switch (input){
		case Add:
			AddContact(&con);
			break;
		case Del:
			DelContact(&con);
			break;
		case Search:
			SearchContact(&con);
			break;
		case Modify:
			ModifyContact(&con);
			break;
		case Show:
			ShowContact(&con);
			break;
		case Sort:
			SortContact(&con);
			break;
		case Exit:
			DestroyContact(&con);
			break;
		default:
			fprintf(stderr, "error");
		}

		
	} while (input);
	return EXIT_SUCCESS;
}
//enum color{red=1,blue,green};
//int main(void){
//	enum color favorite_color;
//	printf("please choose your favorite color:(1.red 2.blue 3.green):");
//	scanf("%d", &favorite_color);
//	switch (favorite_color)
//	{
//	case red:
//		printf("you like red\n");
//		break;
//	case blue:
//		printf("you like blue\n");
//		break;
//	case green:
//		printf("you like green\n");
//		break;
//	default:
//		fprintf(stderr, "error\n");
//	}
//	return EXIT_SUCCESS;
//}