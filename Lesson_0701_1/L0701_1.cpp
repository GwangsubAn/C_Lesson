#include "mylib.h"

// 열거형 (Enumeration Type)
typedef enum // MyColor는 Data Type
{
	RED=200,BLUE,BLACK,YELLOW,WHITE
}MyColor;

// 
typedef union 
{
	short n1;
	long l1;
}MyUnion;

typedef struct
{
	char name[20];
	int age;
}PERSON;

// Type이 됨 :함수의 주소를 저장할수 있는 데이터 유형 정의
typedef int (*FUNC)(int, int);  

int add(int n1, int n2)
{
	return n1 + n2;
}
int subtract(int n1, int n2)
{
	return n1 - n2;
}
void print_value(int num1, int num2, FUNC f)
{
	printf("ret = %d\n", f(num1,num2));
}
int main()
{
	PERSON p1;
	strcpy(p1.name, "james");
	p1.age = 30;
	PERSON* pPerson = &p1;

	// int(*fp)(int, int);
	FUNC fp;
	fp = add;

	int ret=fp(10, 20);
	printf("ret = %d\n", ret);

	// fp = print_value;

	fp = subtract;
	 ret = fp(10, 20);
	printf("ret = %d\n", ret);

	print_value(10, 20, add);
	print_value(10, 20, subtract);

	MyColor my_color;
	my_color = BLACK;
	my_color = WHITE;

	MyUnion u;
	u.n1 = 10;
	u.l1 = 2000;

	printf("%d\n", u.n1);
	printf("%d\n", u.l1);


	return 0;
}