#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_AGE 5
#define MAX_TELE 12
#define MAX_ADDRESS 20
#define DEFAULT_SZ 3
//#define MAX 1000

typedef struct member{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char age[MAX_AGE];
	char tele[MAX_TELE];
	char address[MAX_ADDRESS];
}member;
typedef struct contact{
	struct member* data;
	int size;
	int capacity;
}contact;
void menu();
void InitContact(struct contact* ps);
void AddContact(struct contact* ps);
void ShowContact(const struct contact* ps);
void DelContact(struct contact* ps);
void SearchContact(const struct contact* ps);
void ModifyContact(struct contact* ps);
void SortContact(struct contact*ps);
void DestroyContact(contact* ps);