#include<stdio.h>
#include<stdlib.h>
//int main(void){
//	int a, b; char c;
//	scanf("%d %d %c", &a, &b, &c);
//	switch (c)
//	{
//	case '+':
//		printf("%d", a + b);
//		break;
//	case '-':
//		printf("%d", a - b);
//		break;
//	case '*':
//		printf("%d", a*b);
//		break;
//	case '/':
//		printf("%d",a / b);
//		break;
//	case '%':
//		printf("%d", a%b);
//		break;
//	default:
//		fprintf(stderr, "error");
//
//	}
//	return EXIT_SUCCESS;
//}
//编写程序实现“剪刀，石头，布”游戏。在这个游戏中，两个人同时说“剪刀”，“石头”或“布”，压过另一方的为胜者。
//规则是：“布”胜过“石头”，“石头”胜过“剪刀”，“剪刀”胜过“布”。要求：选择结构中使用枚举类型，结果的输出也使用枚举类型表示。
//#include<assert.h>
//int main(void){
//	enum type{st,cl,sc};
//	enum result{lose=-1,draw,win};
//	enum result num;
//	int a, b;
//	scanf("%d %d", &a, &b);
//	assert(a >= 0 && a <= 2);
//	assert(b >= 0 && b <= 2);
//	if ((a - b) == -2 || (a - b) == 1)
//		num = win;
//	else if ((a - b) == -1 || (a - b) == 2)
//		num = lose;
//	else
//		num = draw;
//	switch (num){
//	case win:
//		printf("%d", win);
//		break;
//	case lose:
//		printf("%d", lose);
//		break;
//	case draw:
//		printf("%d", draw);
//		break;
//	default:
//		fprintf(stderr, "error");
//	}
//	return EXIT_SUCCESS;
//}
//#include<assert.h>
//int main(void){
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int arr[1000];
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	for (int i = 0; i < m; i++){
//		int x, y;
//		scanf("%d %d", &x, &y);
//		assert(x > 0 && x <= n);
//		assert(y>0 && y <= n);
//		int tmp = arr[x-1];
//		arr[x-1] = arr[y-1];
//		arr[y-1] = tmp;
//
//	}
//	for (int i = 0; i < n; i++)
//		printf("%d\n", arr[i]);
//	return EXIT_SUCCESS;
//}
int main(void){
	int a, b, c;
	for (a = 1; a <= 1000; a++){
		for (b = a + 1; b <= 1000; b++)
		{
			for (c = b + 1; c <= 1000; c++){
				if ((a*a + b*b == c*c) && (a + b + c <= 1000))
					printf("%d %d %d\n", a, b, c);
			}
		}
	}
	return EXIT_SUCCESS;
}