#define _CRT_SECURE_NO_WARNINGS   // scanf �Լ� ���� ����  
#include <stdio.h> // ǥ�� ����¿� ���õ� �Լ����� ���ǵ� ���
#include <conio.h>  // Windows OS���� ����� ���� �Լ� ���� ���
#include <string.h>  // ���ڿ� ���� �Լ� ���� ���

// �迭�� ��� ��ҵ��� ���
void print_ary(int p[], int count)
//void print_ary(int* p, int count)

{
	printf("p�� ũ��: %u\n", sizeof(p));
	printf("p[0] = %d\n", p[0]);

	for (int i = 0; i < count; i++)
	{
		printf("%d	", p[i]);
	}
}

int main()
{
	int num;
	//printf("������ �Է��ϼ���>>");
	//scanf("%d", &num);
	//printf("�Էµ� ����: %d\n",num);

	char sz[] = "abcde";
	//char sz[30] = { 0 };  
	//sz[0] = 'A';  // "A"  

	//printf("���ڿ��� �Է��ϼ���>>");
	//scanf("%s", sz);  //�迭���� �ּ������� �����
	printf("�Էµ� ����: %s\n", sz);

	char* ptr = sz; //�迭���� �ּ������� ����� (�ּ� �� ��ü��)
	printf("%c\n", sz[0]);  //a
	printf("%c\n", ptr[0]); //a

	int arr[] = { 10,20,30,40,50 };
	int* ptr2 = arr;
	printf("%d\n", arr[2]); //30
	printf("%d\n", ptr2[2]); //30

	int count = sizeof(arr) / sizeof(int);
	print_ary(arr, count);
	
	return 0;
}

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

// ����2 : ������ ���� �������� ��µǴ� �Լ���  ���弼�� 
// char sz[] = "abcde";

/*
abcde
bcde
cde
de
e
*/
