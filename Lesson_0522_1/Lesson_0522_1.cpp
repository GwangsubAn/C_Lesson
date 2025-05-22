// Lesson_0522_1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS   // scanf 함수 에러 무시  
#include <stdio.h>

int main()
{
	/* switch(변수(또는 함수, 수식))
	case n1:위변수가 n1과 같을때  ;
	break;

	case n2:  ;
	break;

	case n3:  ;
	break;

	default;
	*/
	/// 232324의 1의 자리를 취하고자 할떄 10으로 나눈 나머지를 취한다
	int d = 12121258;
	int res;
	res = d % 10;
	printf("%d\n", res);

	int score;
	char degree;

	printf("점수를 입력하세요(0~100) : ");
	scanf("%d", &score);

	switch (score / 10)
	{
	case 10:		
	case 9:
		degree = 'A';
		break;
	case 8:
		degree = 'B';
		break;
	case 7:
		degree = 'C';
		break;
	case 6:
		degree = 'D';
		break;
	default:
		degree = 'F';
	}
	printf("점수는 %d 이고 %c학점입니다\n", score, degree);

	return 0;
}
