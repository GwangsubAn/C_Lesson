#define _CRT_SECURE_NO_WARNINGS   // scanf 함수 에러 무시  
#include <stdio.h> // 표준 입출력에 관련된 함수들이 정의된 헤더
#include <conio.h>  // Windows OS전용 입출력 관련 함수 정의 헤더
#include <stdlib.h> // 자주 사용되는 유틸리티 (편의성을 높여주는) 함수들이 정의된 헤더

int main()
{
	

	/*
	do
	{

	} while (조건식);
	*/

	char ch = '1';
	do
	{
		printf("1. 새파일\n");
		printf("2. 파일열기\n");
		printf("3. 파일저장\n");
		printf("4. 인쇄\n");
		printf("=========\n");
		printf("x. 종료\n");
		printf("=========\n");
		printf("메뉴를 선택하세요:");

		//scanf("%c", &ch);
		ch = _getch();  // 언테키 없이 한개의 키값 입력
		switch (ch)
		{
		case '1':
			printf("1. 새파일이 선택되었습니다\n");
			break;
		case '2':
			printf("2. 파일열기 선택되었습니다\n");
			break;
		case '3':
			printf("3. 파일저장 선택되었습니다\n");
			break;
		case '4':
			printf("4. 인쇄 선택되었습니다\n");
			break;
		case 'x':
		case 'X':
			printf("x. 종료 선택되었습니다\n");
			break;

		default:
			printf("해당메뉴 없음\n");
		}
	} while (ch != 'x' && ch != 'X');
	return 0;
}