#define _CRT_SECURE_NO_WARNINGS  /MSC Compiler ����ϱ� ���� 
#include<stdio.h>
#include<time.h>
#include<string.h> 
#include<stdlib.h> 

#define MAX_VALUE 100
#define CHECK_PARAM(x)  if(!x) return  // CHECK_PARAM(x)�� ������������ ġȯ
#define RET_CHECK_PARAM(x)  if(!x) return NULL  // CHECK_PARAM(x)�� ������������ ġȯ



// Ÿ�� �� ����
typedef unsigned short MyAge;  // ���ο� ������ Ÿ���� �����ڵ��� ����� �ֵ��� ����
typedef unsigned char* MyString;

// ����ü (structure)
struct PERSON
{
	unsigned int no;
	char name[30];
	//char* name;
	MyAge age;
	unsigned char gender;
};

// �͸��� ����ü
struct {
	unsigned int no;
	char name[30];
	//char* name;
	MyAge age;
	unsigned char gender;
};

// �ֽ� ��� ���
typedef struct {
	unsigned int no;
	char name[30];
	//char* name;
	MyAge age;
	unsigned char gender;
} PERSON;

void print_person(const PERSON* p)  //const : �Լ��ȿ��� ���� �Ұ���(���ȭ)
{
	//if (!p) return;
	CHECK_PARAM(p);
	//printf("��ȣ: %u", (*p).no);
	printf("��ȣ: %u\n", (p->no));

	//(*p).age = 10;

	//printf("�̸�: %s\n", (*p).name);
	printf("�̸�: %s\n", (p->name));

	// printf("����: %u\n", p->age);
	printf("����: %u\n", (*p).age);

	printf("����: %s\n", ((*p).gender == 1) ? "����" : "����");
}

//PERSON* copy_person(PERSON* p)  //const : �Լ��ȿ��� ���� �Ұ���(���ȭ)
//{
//	PERSON copy;   //��������
//	copy.no = p->no;
//	strcpy(copy.name, p->name);
//	copy.age = p->age;
//	copy.gender = p->gender;
//
//	return &copy; // ���������� �ּҸ� ��ȯ�ϸ� �ȵ�
//}

void copy_person(PERSON* pSrc, PERSON* pDest)  //const : �Լ��ȿ��� ���� �Ұ���(���ȭ)
{
	if (!pSrc || !pDest) return;
	pDest->no = pSrc->no;
	strcpy(pDest->name, pSrc->name);
	pDest->age = pSrc->age;
	pDest->gender = pSrc->gender;

	//return &copy; // ���������� �ּҸ� ��ȯ�ϸ� �ȵ�
}


int main()
{
	// Data Type : char, short, int, long, float, double ... pointer(address)

	// unsigned long long ullsize = sizeof(int);   // 4
	// size_t ullsize = sizeof(int);   // 4
	// unsigned short MyAge
	//  
	MyAge age;
	MyString name = "ȫ�浿";
	time_t tm = time(NULL);

	PERSON p1 = { 0 };  // �ʱ�ȭ (�迭 �ʱ�ȭ�� ����) , �ʱ��� �ʿ� ����
	//PERSON* p2 ;  // 
	PERSON p2;  // 

	p1.no = 1;
	strcpy(p1.name, "ȫ�浿");
	//p1.name = "ȫ�浿";
	p1.age = 20;
	p1.gender = 1;

	printf("PERSON ����ü�� ũ�� : %llu\n", sizeof(PERSON));
	print_person(&p1);  // �Լ��� �Ű����� ���޽� ������ ��� : ���� �޸� ���� ,����ð� ����
	
	//p2 = copy_person(&p1);
	//print_person(p2);


	//p2 = &p1; // ���� ���� : 
	memcpy(&p2, &p1, sizeof(PERSON));  // ���� ����(�޸� ����)
	copy_person(&p1, &p2);
	print_person(&p2);

	return 0;
}