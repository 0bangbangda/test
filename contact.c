#include"contact.h"
void menu()
{
	printf("*****************************************\n");
	printf("*****  1.Add         2.Del          *****\n");
	printf("*****  3.Search      4.Modify       *****\n");
	printf("*****  5.Show        6.Sort         *****\n");
	printf("******       0.Exit        **************\n");
}
void InitContact(struct contact* ps)
{   
	ps->data = (member*)malloc(DEFAULT_SZ*sizeof(member));
	if (ps->data == NULL){
		printf("%s\n", strerror(errno));
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
}
void CheckCapacity(contact* ps)
{
	if (ps->size == ps->capacity){
		member* ptr = realloc(ps->data, (ps->capacity+2)*sizeof(member));
		if (ptr != NULL){
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
			printf("增容失败\n");

	}
}
void AddContact(struct contact* ps)
{
	CheckCapacity(ps);
	printf("请输入名字：");
	scanf("%s", &(ps->data[ps->size].name));
	printf("请输入性别：");
	scanf("%s", &(ps->data[ps->size].sex));
	printf("请输入年龄：");
	scanf("%s", &(ps->data[ps->size].age));
	printf("请输入电话：");
	scanf("%s", &(ps->data[ps->size].tele));
	printf("请输入地址：");
	scanf("%s", &(ps->data[ps->size].address));
	(ps->size)++;
	printf("添加成功\n");
	/*if (ps->size == MAX)
		printf("用户数已满");
	else
	{
		printf("请输入名字：");
		scanf("%s", &(ps->data[ps->size].name));
		printf("请输入性别：");
		scanf("%s", &(ps->data[ps->size].sex));
		printf("请输入年龄：");
		scanf("%s", &(ps->data[ps->size].age));
		printf("请输入电话：");
		scanf("%s", &(ps->data[ps->size].tele));
		printf("请输入地址：");
		scanf("%s", &(ps->data[ps->size].address));
		(ps->size)++;
	}*/
	//printf("添加成功\n");
}
void ShowContact(const struct contact* ps)
{
	printf("%20s\t%5s\t%5s\t%12s\t%20s\n", "名字", "性别", "年龄", "电话", "地址");
	for (int i = 0; i < ps->size; i++){
		printf("%20s\t%5s\t%5s\t%12s\t%20s\n", ps->data[i].name,
			ps->data[i].sex, ps->data[i].age, ps->data[i].tele, ps->data[i].address);
	}
}
static int FindByName(char name[], const struct contact*ps){
	int i;
	for (i = 0; i < ps->size; i++){
		if (!(strcmp(name, ps->data[i].name)))
			return i;
	}
	return -1;
}
void DelContact(struct contact* ps)
{
	char name[MAX_NAME];
	printf("请输入名字：");
	scanf("%s", name);
	int indice, i;
	indice = FindByName(name, ps);
	if (indice == -1)
		printf("没找到\n");
	for (i = indice; i < ps->size - 1; i++){
		ps->data[i] = ps->data[i + 1];
	}
	ps->size--;
	printf("删除成功\n");

}
void SearchContact(const struct contact* ps)
{
	char name[MAX_NAME];
	printf("请输入名字：");
	scanf("%s", name);
	int indice = FindByName(name, ps);
	if (indice == -1)
		printf("该用户名不存在\n");
	else
	{
		printf("%20s\t%5s\t%5s\t%12s\t%20s\n", "名字", "性别", "年龄", "电话", "地址");
		printf("%20s\t%5s\t%5s\t%12s\t%20s\n", ps->data[indice].name,
			ps->data[indice].sex, ps->data[indice].age, ps->data[indice].tele, ps->data[indice].address);
	}
}
void ModifyContact(struct contact* ps)
{
	char name[MAX_NAME];
	printf("请输入名字：");
	scanf("%s", name);
	int indice = FindByName(name, ps);
	if (indice == -1)
		printf("该用户名不存在\n");
	else
	{
		printf("请输入名字：");
		scanf("%s", &(ps->data[indice].name));
		printf("请输入性别：");
		scanf("%s", &(ps->data[indice].sex));
		printf("请输入年龄：");
		scanf("%s", &(ps->data[indice].age));
		printf("请输入电话：");
		scanf("%s", &(ps->data[indice].tele));
		printf("请输入地址：");
		scanf("%s", &(ps->data[indice].address));
	}
	printf("修改成功\n");
}
int cmp(void*p1, void* p2){
	return strcmp(((struct member*)p1)->name, ((struct member*)p2)->name);
}
void SortContact(struct contact* ps)
{
	qsort(ps->data, ps->size, sizeof(ps->data[0]), cmp);
	printf("排序成功\n");
}
void DestroyContact(contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}