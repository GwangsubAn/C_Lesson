#define _CRT_SECURE_NO_WARNINGS   // scanf 함수 에러 무시  
#include <stdio.h> // 표준 입출력에 관련된 함수들이 정의된 헤더
#include <conio.h>  // Windows OS전용 입출력 관련 함수 정의 헤더
#include <stdlib.h> // 자주 사용되는 유틸리티 (편의성을 높여주는) 함수들이 정의된 헤더

// 함수 사용 규칙
// 1. 호출하기 전에 함수가 정의가 되어 있어야 한다
// 2. 함수를 호출할떄는 정의된 형식과 완전히 동일하게 호출
// 3. 변수명의 작성 규칙과 동일하게 정의 한다
// 
// 함수를 사용하는 이유:코드의 재사용(생산성을 높인다)
// 
// 함수를 정의하는 방법
// 함수형(자료형) 함수명 ([매개변수1,매개변수2,...]) {}
// 매개변수 : Parameters, Arguments, 인수, 인자

int add_number(int n1, int n2) // 매개변수 n1,n2:호출부로 부터 초기화가 되어 지는 지역변수
{
	return n1 + n2; // return은 함수 결과를 처리하고 결과를 호출부로 반환하는 명령문
}

// overloading (함수 재정의)
//int add_number(int n1, int n2, int n3)
//{
//	return n1 + n2 + n3;
//}

// void : 반환값이 없음 ,호출한 쪽에 결과를 돌려주지 않는다
void display_number(int n)
{
	printf("매개변수 : %d\n", n);
	return; // 또는 사용 안함
}

// 
float get_pi()
{
	return 3.14159F;
}
int multyply(int n1, int n2)
{
	int result = 0;
	for (int i = 0; i < n2; i++)
	{
		result = add_number(result, n1);
	}
	return  result;
}

// 1부터 n까지의 합을 구하여 반환하는 함수를 정의하고 
int sum_numbers(n)
{
	int result = 0;
	for (int i = 1; i <= n; i++)
		result += i;
	return result;
}

// 반지릉(float)을 입력하면 면적을 구하는 함수를 정의하고 
// 매개변수로 반지름 입력
float area(float radius)
{
	float result = 0.0;
	result = 3.14 * radius * radius;
	return result;
}

int main()
{
	// 함수를 호출한다
	int n = add_number(10, 20); // 30;
	printf("n = %d\n", n);

	display_number(50);

	printf("pi : %.4f\n", get_pi());

	printf("%d\n", multyply(10, 5));

	printf("1부터 %d까지의 합 : %d\n", 100, sum_numbers(100));

	float radius = 5.2;
	printf("반지름 %.2f의 면적은 %.2f\n", radius, area(radius));

	return 0;
}