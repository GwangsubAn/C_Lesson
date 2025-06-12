#define _CRT_SECURE_NO_WARNINGS   // scanf 함수 에러 무시  
#include <stdio.h> // 표준 입출력에 관련된 함수들이 정의된 헤더
#include <string.h>  // 문자열 관련 함수 정의 헤더

// 숙제1 : 소문자를 대문자로 출력하는 함수를 만드세요 
// char sz[] = "abcde";
// 출력형식
/*
A
B
C
D
E
*/

void print_char(char* pt, int count)
{
	int i;
	for (i = 0;i < count;i++)
	{
		//printf("%c\n", pt[i] -('a' - 'A'));
		printf("%c\n", *(pt+i) - ('a' - 'A'));

	}
}
int main()
{
	char sz[] = "abcde";	
	print_char(sz, strlen(sz));

	return 0;
}
