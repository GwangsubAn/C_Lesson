#define _CRT_SECURE_NO_WARNINGS   // scanf �Լ� ���� ����  
#include <stdio.h> // ǥ�� ����¿� ���õ� �Լ����� ���ǵ� ���
#include <string.h>  // ���ڿ� ���� �Լ� ���� ���

// ����2 : ������ ���� �������� ��µǴ� �Լ���  ���弼�� 
// char sz[] = "abcde";
/*
abcde
bcde
cde
de
e
*/
void print_char(char* pt, int cnt)
{
	int i;
	for (i = 0; i < cnt; i++)
	{
		//printf("%s\n", pt + i);  //  �ӽ� ������ ���� (������) ����
		printf("%s\n", pt++);      //  pt������ ���� ��ü�� �̵�
	}
}
int main()
{
	char sz[] = "abcde";
	print_char(sz, strlen(sz));

	return 0;
}