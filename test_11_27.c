#include<stdio.h>
#include<stdlib.h>
//int main(void){
//	float x, y;
//	char o;
//	double r;
//	scanf("%f %f %c", &x, &y, &o);
//	switch (o){
//	case '+':
//		r = x + y;
//		break;
//	case '-':
//		r = x - y;
//		break;
//	case '*':
//		r = x*y;
//		break;
//	case '/':
//		r = x / y;
//		break;
//	}
//	printf("%f", r);
//	return EXIT_SUCCESS;
//}
//编制程序，输出下述数据。
//
//说明：（1）表中数据来自总参谋部测绘局编制的
//
//《世界地图集》（星球地图出版社，2004年1月第2版），数据可能已不准确；
//（2）面积单位为万平方公里，人口单位为万人，GDP单位为十亿美元；
//（3）表中所有数据都必须以变量的形式保存；（4）如果不知道每字段宽度
//到底为多少，请仔细数数作为分隔标记的短横数目。
//-------------------------------------------------- -
//COUNTRY          AREA(10K  km2)    POP.(10K)    GDP(Billion$)
//-------------------------------------------------- -
//China                            960.00    129500.00    1080.00
//Iceland                          10.30            27.57    8.20
//India                            297.47      97000.00    264.80
//Madagascar                    62.70        1635.00    3.60
//Maldive                        0.0298            27.80    0.23
//-------------------------------------------------- -
//注意：输出时空格与短线的数量要与上面格式严格一致，否则系统会判为错误。
//struct data
//{
//	double area;
//	double pop;
//	double gdp;
//};
//int main(void){
//	struct data china = { 960.00, 129500.00, 1080.00 };
//	struct data iceland = { 10.30, 27.57, 8.20 };
//	struct data india = { 297.47, 97000.00, 264.80 };
//	struct data madagascar = { 62.70, 1635.00, 3.60 };
//	struct data maldive = { 0.0298, 27.80, 0.23 };
//	printf("---------------------------------------------------\n");
//	printf("COUNTRY        AREA(10K  km2)    POP.(10K)    GDP(Billion$)\n");
//	printf("---------------------------------------------------\n");
//	printf("China                    %.2f    %.2f    %.2f", china.area, china.pop, china.gdp);
//	return EXIT_SUCCESS;
//}
//#include<string.h>
//int main(void){
//	int n;
//	scanf("%d", &n);
//	char arr[6];
//	for (int i = 0; i < n; i++){
//		scanf("%s", arr);
//		if (!strcmp(arr, "WYS"))
//			printf("KXZSMR\n");
//		else if (!strcmp(arr, "CQ"))
//			printf("CHAIQIANG\n");
//		else if (!strcmp(arr, "LC"))
//			printf("DRAGONNET\n");
//		else if ((!strcmp(arr, "SYT")) || (!strcmp(arr, "SSD")) || (!strcmp(arr, "LSS")) || (!strcmp(arr, "LYF")))
//			printf("STUDYFATHER\n");
//		else
//			printf("DENOMINATOR\n");
//		memset(arr, 0, sizeof(arr));
//	}
//	return EXIT_SUCCESS;
//}
//#include<math.h>
//int sommeDesDiviseurs(int n);
//int main(void){
//	int n;
//	scanf("%d", &n);
//	printf("%d", sommeDesDiviseurs(n));
//	return EXIT_SUCCESS;
//}
///*
//antecetant:n>0
//role:renvoie la somme des diviseurs strict de n
//*/
//int sommeDesDiviseurs(const int n){
//	int som = 0;
//	//inutile de tester les diviseur > a sqrt(n)
//	for (int i = 1; i <= sqrt(n); i++){
//		//n n'est pas diviseur strict
//		if (i == 1)
//			som += 1;
//		else{
//			if (n%i == 0)
//				//i est un diviseur
//				som = som + i + n / i;
//		}
//
//	}
//	return som;
//}
/*
antecetent:n>0
role:teste si n est un nombre parfait ou non
*/
//int estParfait(const int n){
	//int som = 0;
	//	//inutile de tester les diviseur > a sqrt(n)
	//	for (int i = 1; i <= sqrt(n); i++){
	//		//n n'est pas diviseur strict
	//		if (i == 1)
	//			som += 1;
	//		else{
	//			if (n%i == 0)
	//				//i est un diviseur
	//				som = som + i + n / i;
	//		}
	//		if (som == n)
	//			//n est parfait
	//			return 1;
	//		else
	//			//n n'est pas parfait
	//			return 0;
	//return n == sommeDesDiviseurs;
//}
/*
antecetent:n>0
role:ecrit sur la sortie standard tous les nombres parfaits sur l'intervalle[1:n]
*/
//int main(void){
//	int n;
//	scanf("%d", &n);
//	
//	for (int i = 1; i <= n; i++){
//		//test si i est un nombre parfait ou non
//		if (estParfait(i))
//			//i est parfait
//			printf("%d ", i);
//	}
//	return EXIT_SUCCESS;
//}
//#include<math.h>
////le type long int a 8 byte,egal a 64 bits
//#define NB_BITS 64
//typedef short binaire[NB_BITS];
///*
//antecedent:b est un tableau d'entiers courts(short) contenant des 0 et des 1
//role:calcule est renvoie la valeur decimal d'un nombre binaire
//*/
//unsigned int binaireToLongInt(const binaire b){
//	int som = 0;
//	for (int i = 0; i < NB_BITS; i++){
//		som += i*(int)pow((double)2, (double)i);
//	}
//	return som;
//}
//#include<assert.h>
//int main(void){
//	int k;int n; float p; float s = 0, tmp;
//	scanf("%d %d %f", &k, &n, &p);
//	tmp = (float)k;
//	assert(k >= 100 && k <= 10000 && n >= 1 && n <= 48 && p >= 0.001&&p <= 0.01);
//	for (int i = 0; i < n; i++){
//		s += tmp*p;
//		tmp = (1.0 + p)*tmp + (float)k;
//	}
//	s = (int)(s * 100);
//	printf("%.2f", s / 100);
//	return EXIT_SUCCESS;
//}
#include<math.h>
#include<assert.h>
int prime(int n);
int main(void){
	int n;
	scanf("%d", &n);
	assert(n >= 1 && n <= 10000);
	for (int i = 2; i <= n; i++){
		if (n % i == 0){
			if (prime(i))
				printf("%d ", i);
		}
	}
	return EXIT_SUCCESS;
}
int prime(int n)
{
	for (int i = 2; i <= (int)sqrt(n); i++){
		if (n%i == 0)
			return 0;
	}
	return 1;
}