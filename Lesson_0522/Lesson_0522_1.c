
#define _CRT_SECURE_NO_WARNINGS   // scanf 함수 에러 무시  
#include<stdio.h>

int main()
{

	// 삼항 연산자
	// 조건식? 참일떄:거짓일떄
	int n = 5;
	char ch;

	ch = (n % 2) == 0 ? 'e' : 'o';
	printf("%c\n", ch);



	// 제어문 : if , switch 
	// if 
	// if(조건식) 

	/*
	if()
	{
	}
	else
	{
	}
	*/

	return 0;
}