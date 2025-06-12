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

void print_char(char* pt, int count)  // char sz[] 동일 표현임
{
	int i;
//	if (pt == NULL || count==0)  // 포인터 변수에 0을 입력할때 pt=NULLpt[i] - 32
	if (!pt || !count)  // 포인터 변수에 0을 입력할때 pt=NULLpt[i] - 32
		return ;

	for (i = 0;i < count;i++)
	{
		if (pt[i] >= 'a' && pt[i] <= 'z')
			pt[i] -= 32;

		printf("%c\n", pt[i]);
		// printf("%c\n", *(pt+i));
	}
}
int main()
{
	char sz[] = "abcde";	
	print_char(sz, strlen(sz));

	// printf("%s\n", sz++); 배열주소는 상수값으로 변경 불가능
	// char* psz = sz;

	return 0;
}
