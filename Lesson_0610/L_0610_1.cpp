#define _CRT_SECURE_NO_WARNINGS   // scanf 함수 에러 무시  
#include <stdio.h> // 표준 입출력에 관련된 함수들이 정의된 헤더
#include <conio.h>  // Windows OS전용 입출력 관련 함수 정의 헤더
#include <string.h>  // 문자열 관련 함수 정의 헤더

int add(int a, int b)
{
	a = 100;
	b = 200;
	return a + b;
}

int main()
{	
	{
		// Local (지역)
	// 
	short num; // 메모리 2 바이트 확보(정수형으로, 시스템이 알아서 잡으세요) 
	num = 5;   // 확보된 메모리 공간 num에 정수 5를 대입하라
	
	printf("num= %d\n", num);
	printf("num의 크기: %ubytes\n", sizeof(num)); // %u : unsigned integer
	printf("num의 주소: %p\n", &num);

	// 포인터(포인터변수) : 무조건 주소만 저장 할수 있다, 주소를 저장하는 변수 windows64 시스템에서는 8Bytes
	// 
	short* addr = &num; // short*형을 갖는 addr을 선언하고 num의 주소를 저장한다.
	printf("addr의 크기: %u\n", sizeof(addr));
	printf("addr의 값: %p\n", addr);

	printf("addr이 참조하는 값= %d\n", *addr);
	*addr = 20;
	printf("num= %d\n", num);

	/*addr = 100;
	printf("addr의 값: %p\n", addr);*/


	printf("\n\n");


	long long num2 = 200000L;
	printf("num2= %lld\n", num2);
	printf("num2의 크기: %ubytes\n", sizeof(num2)); // %u : unsigned integer
	printf("num2의 주소: %p\n", &num2);

	long long* addr2 = &num2;
	printf("addr2의 크기: %u\n", sizeof(addr2));	
	printf("addr2의 값: %p\n", addr2);
	printf("addr2 참조하는 값= %lld", *addr2);
	}
	

	return 0;
}
