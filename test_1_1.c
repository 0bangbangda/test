#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
struct Stu
{
	char arr[20];
	int age;
	double score;
};
//int main(void){
//	struct Stu s = { "����", 12, 55.5 };
//	struct Stu tmp = { 0 };
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL){
//		printf("%s\n", strerror(errno));
//		return EXIT_FAILURE;
//	}
//	//��ʽ��д�ļ�
//	//fprintf(pfWrite, "%s %d %lf", s.arr, s.age, s.score);
//	//��ʽ����ȡ�ļ�
//	/*fscanf(pfRead, "%s %d %lf", &(tmp.arr), &(tmp.age), &(tmp.score));
//	printf("%s %d %.2f", tmp.arr, tmp.age, tmp.score);*/
//	return EXIT_SUCCESS;
//}
//int main(void){
//	struct Stu s = { "����", 20, 55.5 };
//	struct Stu tmp = { 0 };
//	FILE* pfRead = fopen("test.txt", "rb");
//	if (pfRead == NULL){
//		printf("%s\n", strerror(errno));
//		return EXIT_FAILURE;
//	}
//	//�Զ�������ʽд�ļ�
//	//fwrite(&s, sizeof(struct Stu), 1, pfWrite);
//	//fclose(pfWrite);
//	//pfWrite = NULL;
//	//�Զ�������ʽ��ȡ�ļ�
//	fread(&tmp, sizeof(tmp), 1, pfRead);
//	printf("%s %d %.2f\n", tmp.arr, tmp.age, tmp.score);
//	fclose(pfRead);
//	pfRead = NULL;
//	return EXIT_SUCCESS;
//}
//int main(void){
//	struct Stu s = { "����", 20, 55.5 };
//	struct Stu tmp = { 0 };
//	char arr[100];
//	sprintf(arr, "%s %d %lf", s.arr, s.age, s.score);
//	printf("%s\n", arr);
//	sscanf(arr, "%s %d %lf", tmp.arr, &(tmp.age), &(tmp.score));
//	printf("%s %d %lf\n", tmp.arr, tmp.age, tmp.score);
//	return EXIT_SUCCESS;
//}