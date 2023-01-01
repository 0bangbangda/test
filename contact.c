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
			printf("���ݳɹ�\n");
		}
		else
			printf("����ʧ��\n");

	}
}
void AddContact(struct contact* ps)
{
	CheckCapacity(ps);
	printf("���������֣�");
	scanf("%s", &(ps->data[ps->size].name));
	printf("�������Ա�");
	scanf("%s", &(ps->data[ps->size].sex));
	printf("���������䣺");
	scanf("%s", &(ps->data[ps->size].age));
	printf("������绰��");
	scanf("%s", &(ps->data[ps->size].tele));
	printf("�������ַ��");
	scanf("%s", &(ps->data[ps->size].address));
	(ps->size)++;
	printf("��ӳɹ�\n");
	/*if (ps->size == MAX)
		printf("�û�������");
	else
	{
		printf("���������֣�");
		scanf("%s", &(ps->data[ps->size].name));
		printf("�������Ա�");
		scanf("%s", &(ps->data[ps->size].sex));
		printf("���������䣺");
		scanf("%s", &(ps->data[ps->size].age));
		printf("������绰��");
		scanf("%s", &(ps->data[ps->size].tele));
		printf("�������ַ��");
		scanf("%s", &(ps->data[ps->size].address));
		(ps->size)++;
	}*/
	//printf("��ӳɹ�\n");
}
void ShowContact(const struct contact* ps)
{
	printf("%20s\t%5s\t%5s\t%12s\t%20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
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
	printf("���������֣�");
	scanf("%s", name);
	int indice, i;
	indice = FindByName(name, ps);
	if (indice == -1)
		printf("û�ҵ�\n");
	for (i = indice; i < ps->size - 1; i++){
		ps->data[i] = ps->data[i + 1];
	}
	ps->size--;
	printf("ɾ���ɹ�\n");

}
void SearchContact(const struct contact* ps)
{
	char name[MAX_NAME];
	printf("���������֣�");
	scanf("%s", name);
	int indice = FindByName(name, ps);
	if (indice == -1)
		printf("���û���������\n");
	else
	{
		printf("%20s\t%5s\t%5s\t%12s\t%20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		printf("%20s\t%5s\t%5s\t%12s\t%20s\n", ps->data[indice].name,
			ps->data[indice].sex, ps->data[indice].age, ps->data[indice].tele, ps->data[indice].address);
	}
}
void ModifyContact(struct contact* ps)
{
	char name[MAX_NAME];
	printf("���������֣�");
	scanf("%s", name);
	int indice = FindByName(name, ps);
	if (indice == -1)
		printf("���û���������\n");
	else
	{
		printf("���������֣�");
		scanf("%s", &(ps->data[indice].name));
		printf("�������Ա�");
		scanf("%s", &(ps->data[indice].sex));
		printf("���������䣺");
		scanf("%s", &(ps->data[indice].age));
		printf("������绰��");
		scanf("%s", &(ps->data[indice].tele));
		printf("�������ַ��");
		scanf("%s", &(ps->data[indice].address));
	}
	printf("�޸ĳɹ�\n");
}
int cmp(void*p1, void* p2){
	return strcmp(((struct member*)p1)->name, ((struct member*)p2)->name);
}
void SortContact(struct contact* ps)
{
	qsort(ps->data, ps->size, sizeof(ps->data[0]), cmp);
	printf("����ɹ�\n");
}
void DestroyContact(contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}