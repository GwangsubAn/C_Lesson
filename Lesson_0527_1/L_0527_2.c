#define _CRT_SECURE_NO_WARNINGS   // scanf �Լ� ���� ����  
#include <stdio.h> // ǥ�� ����¿� ���õ� �Լ����� ���ǵ� ���
#include <conio.h>  // Windows OS���� ����� ���� �Լ� ���� ���
#include <stdlib.h> // ���� ���Ǵ� ��ƿ��Ƽ (���Ǽ��� �����ִ�) �Լ����� ���ǵ� ���

int main()
{
	

	/*
	do
	{

	} while (���ǽ�);
	*/

	char ch = '1';
	do
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
		ch = _getch();  // ����Ű ���� �Ѱ��� Ű�� �Է�
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
		case 'X':
			printf("x. ���� ���õǾ����ϴ�\n");
			break;

		default:
			printf("�ش�޴� ����\n");
		}
	} while (ch != 'x' && ch != 'X');
	return 0;
}