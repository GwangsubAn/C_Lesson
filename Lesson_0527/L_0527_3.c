#define _CRT_SECURE_NO_WARNINGS   // scanf 함수 에러 무시  
#include <stdio.h> // 표준 입출력에 관련된 함수들이 정의된 헤더
#include <conio.h>  // Windows OS전용 입출력 관련 함수 정의 헤더
#include <stdlib.h> // 자주 사용되는 유틸리티 (편의성을 높여주는) 함수들이 정의된 헤더

int main()
{

	// for(초기식; 조건식;증감식)
	//{

	//}
	/*int i;
	for (i = 1; i < 10; i++)
	{
		printf("%d\n", i);
	}
	*/
	for (int j = 2; j < 10; j++)
	{
		for (int i = 1; i < 10; i++)
		//{
			printf("%d x %d = %d\n", j,i,j*i);
		//}
		printf("\n");
	}

	// i = 1;
	// printf("%d\n", n);




	return 0;
}