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

void print_char(char* pt, int count)  // char sz[] ���� ǥ����
{
	int i;
//	if (pt == NULL || count==0)  // ������ ������ 0�� �Է��Ҷ� pt=NULLpt[i] - 32
	if (!pt || !count)  // ������ ������ 0�� �Է��Ҷ� pt=NULLpt[i] - 32
		return ;

	for (i = 0;i < count;i++)
	{
		if (pt[i] >= 'a' && pt[i] <= 'z')
			pt[i] -= 32;

		printf("%c\n", pt[i]);
		// printf("%c\n", *(pt+i));
	}
}
int main()
{
	char sz[] = "abcde";	
	print_char(sz, strlen(sz));

	// printf("%s\n", sz++); �迭�ּҴ� ��������� ���� �Ұ���
	// char* psz = sz;

	return 0;
}
