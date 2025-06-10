#define _CRT_SECURE_NO_WARNINGS   // scanf 함수 에러 무시  
#include <stdio.h> // 표준 입출력에 관련된 함수들이 정의된 헤더
#include <conio.h>  // Windows OS전용 입출력 관련 함수 정의 헤더
#include <string.h>  // 문자열 관련 함수 정의 헤더

// 함수를 같은 이름으로 정의 하는 것(Over Loading)
int add(int a, int b)
{
	a = 100;
	b = 200;
	return a + b;
}

int add(int* p1, int* p2)
{
	printf("%d\n", *p1);
	printf("%d\n", *p2);

	*p1 = 100;
	*p2 = 200;

	return *p1 + *p2;
}

void add(int a, int b, int* ret)
{
	*ret = a + b;
}

void exchange(int* p1, int* p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main()
{
	int n1 = 10;
	int n2 = 30;
	{

		//int n3 = add(n1, n2);  // 값에 의한 전달, 값에 의한 호출 (Call by value)
		//printf("n1= %d\n", n1);
		//printf("n2= %d\n", n2);
		//printf("n3= %d\n", n3);

		//n3 = add(&n1, &n2);  // 참조에 의한 호출 (Call by reference)
		//printf("n1= %d\n", n1);
		//printf("n2= %d\n", n2);
		//printf("n3= %d\n", n3);

		//printf("\n");

		//add(n1, n2, &n3);
		//printf("n1= %d\n", n1);
		//printf("n2= %d\n", n2);
		//printf("n3= %d\n", n3);


		//printf("n1= %d\n", n1);
		//printf("n2= %d\n", n2);
	}

	//n1 = 5; 
	//n2 = 8;
	printf("변경전: %d,%d\n", n1, n2);
	exchange(&n1, &n2);
	printf("변경후: %d,%d\n", n1, n2);
	return 0;
}
