#define _CRT_SECURE_NO_WARNINGS   // scanf �Լ� ���� ����  
#include <stdio.h>
#include <conio.h>  // Windows OS���� ����� ���� �Լ� ���� ���


int main()
{
	// �ݺ��� : while, do ~ while, for
	/*int i = 0;
	while (i < 10)
		printf("%-5d", i++);
	printf("\n");
	printf("while �ݺ����� ����Ǿ����ϴ�\n");*/


	// ������ 4���� ����ϼ���
	/*int i = 1;
	while (i < 10)
	{
		printf("4 x %d = %2d\n", i, 4 * i);
		i++;
	}
	printf("\n");
	printf("while �ݺ����� ����Ǿ����ϴ�\n");*/

	// 20������ 3�� ����� ����ϼ���
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
	printf("while �ݺ����� ����Ǿ����ϴ�\n");*/

	// �ݺ�Ƚ���� ��Ȯ���� ���� ��
	char ch='1';
	while (ch !='x')
	{
		printf("1. ������\n");
		printf("2. ���Ͽ���\n");
		printf("3. ��������\n");
		printf("4. �μ�\n");
		printf("=========\n");
		printf("x. ����\n");
		printf("=========\n");
		printf("�޴��� �����ϼ���:");

		//scanf("%c", &ch);
		ch = _getch();
		switch (ch)
		{
		case '1':
			printf("1. �������� ���õǾ����ϴ�\n");
			break;
		case '2':
			printf("2. ���Ͽ��� ���õǾ����ϴ�\n");
			break;
		case '3':
			printf("3. �������� ���õǾ����ϴ�\n");
			break;
		case '4':
			printf("4. �μ� ���õǾ����ϴ�\n");
			break;

		case 'x':
			printf("x. ���� ���õǾ����ϴ�\n");
			break;

		default:
			printf("�ش�޴� ����\n");

		}
	}


	return 0;
}
