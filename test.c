#include"contact.h"
enum option{Add=1,Del,Search,Modify,Show,Sort,Exit=0};
int main(void){
	enum option input;
	do{
		//menu();
		printf("please choose:");
		menu();
		scanf("%d", &input);
		switch (input){
		case Add:
			break;
		case Del:
			break;
		case Search:
			break;
		case Modify:
			break;
		case Show:
			break;
		case Sort:
			break;
		case Exit:
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