#define _CRT_SECURE_NO_WARNINGS   // scanf �Լ� ���� ����  
#include <stdio.h> // ǥ�� ����¿� ���õ� �Լ����� ���ǵ� ���
#include <conio.h>  // Windows OS���� ����� ���� �Լ� ���� ���
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
		printf("%c\n",pt[i]);
	}

}
int main()
{
	char sz[] = "abcde";
	int count = sizeof(sz) / sizeof(char);
	print_char(sz, count - 1);
	return 0;
}
