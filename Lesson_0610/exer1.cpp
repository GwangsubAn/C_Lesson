#define _CRT_SECURE_NO_WARNINGS   // scanf �Լ� ���� ����  
#include <stdio.h> // ǥ�� ����¿� ���õ� �Լ����� ���ǵ� ���
#include <string.h>  // ���ڿ� ���� �Լ� ���� ���

// ����1 : �ҹ��ڸ� �빮�ڷ� ����ϴ� �Լ��� ���弼�� 
// char sz[] = "abcde";
// �������
/*
A
B
C
D
E
*/

void print_char(char* pt, int count)
{
	int i;
	for (i = 0;i < count;i++)
	{
		//printf("%c\n", pt[i] -('a' - 'A'));
		printf("%c\n", *(pt+i) - ('a' - 'A'));

	}
}
int main()
{
	char sz[] = "abcde";	
	print_char(sz, strlen(sz));

	return 0;
}
