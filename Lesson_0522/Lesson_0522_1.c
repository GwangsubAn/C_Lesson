
#define _CRT_SECURE_NO_WARNINGS   // scanf 함수 에러 무시  
#include<stdio.h>

int main()
{
	{
		// 삼항 연산자
		// 조건식? 참일떄:거짓일떄
		/*int n = 5;
		char ch;*/

		/*ch = (n % 2) == 0 ? 'e' : 'o';
		printf("%c\n", ch);

		if (n % 2)
			printf("%d는 홀수 입니다", n);*/


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
	}

	int score;
	char degree,degree1;

	printf("점수를 입력하세요(0~100) : ");
	scanf("%d", &score);

	if (score >= 90)
		degree = 'A';
	else if (score >= 80)
		degree = 'B';
	else if (score >= 70)
		degree = 'C';
	else if (score >= 60)
		degree = 'D';
	else
		degree = 'F';

	printf("점수는 %d 이고 %c학점입니다\n", score, degree);

	// degree1 = score >= 90 ? 'A' : score >= 80 ? 'B' : score >= 70 ? 'C' : score >= 60 ? 'D' : 'F';
	// printf("점수는 %d 이고 %c학점입니다\n", score, degree1);

	return 0;
}