#define _CRT_SECURE_NO_WARNINGS   // scanf �Լ� ���� ����  
#include <stdio.h> // ǥ�� ����¿� ���õ� �Լ����� ���ǵ� ���
#include <conio.h>  // Windows OS���� ����� ���� �Լ� ���� ���
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
void print_char(char* ptr, int count)
{
	int i;
	for (i = 0;i < count;i++)
	{
		printf("%s\n", ptr+i );
	}
}

int main()
{
	char sz[] = "abcde"; 
	int count = sizeof(sz) / sizeof(char);
	print_char(sz, count-1);
	return 0;
}