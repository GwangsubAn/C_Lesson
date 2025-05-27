#define _CRT_SECURE_NO_WARNINGS   // scanf 함수 에러 무시  
#include <stdio.h>
#include <conio.h>  // Windows OS전용 입출력 관련 함수 정의 헤더


int main()
{
	// 반복문 : while, do ~ while, for
	/*int i = 0;
	while (i < 10)
		printf("%-5d", i++);
	printf("\n");
	printf("while 반복문이 종료되었습니다\n");*/


	// 구구단 4단을 출력하세요
	/*int i = 1;
	while (i < 10)
	{
		printf("4 x %d = %2d\n", i, 4 * i);
		i++;
	}
	printf("\n");
	printf("while 반복문이 종료되었습니다\n");*/

	// 20이하의 3의 배수를 출력하세요
	/*int i = 1;
	while (i <= 20)
	{
		if (!(i % 3))
		{
			printf("%d\t", i);
		}
		i++;
	}
	printf("\n");
	printf("while 반복문이 종료되었습니다\n");*/

	// 반복횟수가 명확하지 않을 때
	char ch='1';
	while (ch !='x')
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
		ch = _getch();
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
			printf("x. 종료 선택되었습니다\n");
			break;

		default:
			printf("해당메뉴 없음\n");

		}
	}


	return 0;
}
