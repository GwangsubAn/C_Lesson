#define _CRT_SECURE_NO_WARNINGS   // scanf 함수 에러 무시  
#include <stdio.h> // 표준 입출력에 관련된 함수들이 정의된 헤더
#include <conio.h>  // Windows OS전용 입출력 관련 함수 정의 헤더
#include <string.h>  // 문자열 관련 함수 정의 헤더

// 배열의 모든 요소들을 출력
void print_ary(int p[], int count)
//void print_ary(int* p, int count)

{
	printf("p의 크기: %u\n", sizeof(p));
	printf("p[0] = %d\n", p[0]);

	for (int i = 0; i < count; i++)
	{
		printf("%d	", p[i]);
	}
}

int main()
{
	int num;
	//printf("정수를 입력하세요>>");
	//scanf("%d", &num);
	//printf("입력된 정수: %d\n",num);

	char sz[] = "abcde";
	//char sz[30] = { 0 };  
	//sz[0] = 'A';  // "A"  

	//printf("문자열을 입력하세요>>");
	//scanf("%s", sz);  //배열명은 주소이이자 상수임
	printf("입력된 정수: %s\n", sz);

	char* ptr = sz; //배열명은 주소이이자 상수임 (주소 그 자체임)
	printf("%c\n", sz[0]);  //a
	printf("%c\n", ptr[0]); //a

	int arr[] = { 10,20,30,40,50 };
	int* ptr2 = arr;
	printf("%d\n", arr[2]); //30
	printf("%d\n", ptr2[2]); //30

	int count = sizeof(arr) / sizeof(int);
	print_ary(arr, count);
	
	return 0;
}

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

// 숙제2 : 다음과 같은 형식으로 출력되는 함수를  만드세요 
// char sz[] = "abcde";

/*
abcde
bcde
cde
de
e
*/
