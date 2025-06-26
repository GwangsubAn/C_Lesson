#define _CRT_SECURE_NO_WARNINGS  /MSC Compiler 사용하기 위해 
#include<stdio.h>
#include<time.h>
#include<string.h> 
#include<stdlib.h> 

#define MAX_VALUE 100
#define CHECK_PARAM(x)  if(!x) return  // CHECK_PARAM(x)를 우측문장으로 치환
#define RET_CHECK_PARAM(x)  if(!x) return NULL  // CHECK_PARAM(x)를 우측문장으로 치환



// 타입 재 정의
typedef unsigned short MyAge;  // 새로운 데이터 타입을 개발자들이 만들수 있도록 제공
typedef unsigned char* MyString;

// 구조체 (structure)
struct PERSON
{
	unsigned int no;
	char name[30];
	//char* name;
	MyAge age;
	unsigned char gender;
};

// 익명의 구조체
struct {
	unsigned int no;
	char name[30];
	//char* name;
	MyAge age;
	unsigned char gender;
};

// 최신 사용 방식
typedef struct {
	unsigned int no;
	char name[30];
	//char* name;
	MyAge age;
	unsigned char gender;
} PERSON;

void print_person(const PERSON* p)  //const : 함수안에서 변경 불가능(상수화)
{
	//if (!p) return;
	CHECK_PARAM(p);
	//printf("번호: %u", (*p).no);
	printf("번호: %u\n", (p->no));

	//(*p).age = 10;

	//printf("이름: %s\n", (*p).name);
	printf("이름: %s\n", (p->name));

	// printf("나이: %u\n", p->age);
	printf("나이: %u\n", (*p).age);

	printf("성별: %s\n", ((*p).gender == 1) ? "남자" : "여자");
}

//PERSON* copy_person(PERSON* p)  //const : 함수안에서 변경 불가능(상수화)
//{
//	PERSON copy;   //지역변수
//	copy.no = p->no;
//	strcpy(copy.name, p->name);
//	copy.age = p->age;
//	copy.gender = p->gender;
//
//	return &copy; // 지역변수의 주소를 반환하면 안됨
//}

void copy_person(PERSON* pSrc, PERSON* pDest)  //const : 함수안에서 변경 불가능(상수화)
{
	if (!pSrc || !pDest) return;
	pDest->no = pSrc->no;
	strcpy(pDest->name, pSrc->name);
	pDest->age = pSrc->age;
	pDest->gender = pSrc->gender;

	//return &copy; // 지역변수의 주소를 반환하면 안됨
}


int main()
{
	// Data Type : char, short, int, long, float, double ... pointer(address)

	// unsigned long long ullsize = sizeof(int);   // 4
	// size_t ullsize = sizeof(int);   // 4
	// unsigned short MyAge
	//  
	MyAge age;
	MyString name = "홍길동";
	time_t tm = time(NULL);

	PERSON p1 = { 0 };  // 초기화 (배열 초기화와 같음) , 초기하 필요 없음
	//PERSON* p2 ;  // 
	PERSON p2;  // 

	p1.no = 1;
	strcpy(p1.name, "홍길동");
	//p1.name = "홍길동";
	p1.age = 20;
	p1.gender = 1;

	printf("PERSON 구조체의 크기 : %llu\n", sizeof(PERSON));
	print_person(&p1);  // 함수에 매개변수 전달시 포인터 사용 : 이유 메모리 절약 ,복사시간 절약
	
	//p2 = copy_person(&p1);
	//print_person(p2);


	//p2 = &p1; // 얕은 복사 : 
	memcpy(&p2, &p1, sizeof(PERSON));  // 깊은 복사(메모리 복사)
	copy_person(&p1, &p2);
	print_person(&p2);

	return 0;
}