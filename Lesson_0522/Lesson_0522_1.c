
#define _CRT_SECURE_NO_WARNINGS   // scanf �Լ� ���� ����  
#include<stdio.h>

int main()
{
	{
		// ���� ������
		// ���ǽ�? ���ϋ�:�����ϋ�
		/*int n = 5;
		char ch;*/

		/*ch = (n % 2) == 0 ? 'e' : 'o';
		printf("%c\n", ch);

		if (n % 2)
			printf("%d�� Ȧ�� �Դϴ�", n);*/


			// ��� : if , switch 
			// if 
			// if(���ǽ�) 

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

	printf("������ �Է��ϼ���(0~100) : ");
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

	printf("������ %d �̰� %c�����Դϴ�\n", score, degree);

	// degree1 = score >= 90 ? 'A' : score >= 80 ? 'B' : score >= 70 ? 'C' : score >= 60 ? 'D' : 'F';
	// printf("������ %d �̰� %c�����Դϴ�\n", score, degree1);

	return 0;
}