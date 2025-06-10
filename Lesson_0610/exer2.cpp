#define _CRT_SECURE_NO_WARNINGS   // scanf 함수 에러 무시  
#include <stdio.h> // 표준 입출력에 관련된 함수들이 정의된 헤더
#include <conio.h>  // Windows OS전용 입출력 관련 함수 정의 헤더
#include <string.h>  // 문자열 관련 함수 정의 헤더

// 숙제2 : 다음과 같은 형식으로 출력되는 함수를  만드세요 
// char sz[] = "abcde";

/*
abcde
bcde
cde
de
e
*/
void print_char(char* ptr, int count)
{
	int i;
	for (i = 0;i < count;i++)
	{
		printf("%s\n", ptr+i );
	}
}

int main()
{
	char sz[] = "abcde"; 
	int count = sizeof(sz) / sizeof(char);
	print_char(sz, count-1);
	return 0;
}