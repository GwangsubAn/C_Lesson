#define _CRT_SECURE_NO_WARNINGS   // scanf �Լ� ���� ����  
#include <stdio.h> // ǥ�� ����¿� ���õ� �Լ����� ���ǵ� ���
#include <conio.h>  // Windows OS���� ����� ���� �Լ� ���� ���
#include <string.h>  // ���ڿ� ���� �Լ� ���� ���

// �Լ��� ���� �̸����� ���� �ϴ� ��(Over Loading)
int add(int a, int b)
{
	a = 100;
	b = 200;
	return a + b;
}

int add(int* p1, int* p2)
{
	printf("%d\n", *p1);
	printf("%d\n", *p2);

	*p1 = 100;
	*p2 = 200;

	return *p1 + *p2;
}

void add(int a, int b, int* ret)
{
	*ret = a + b;
}

void exchange(int* p1, int* p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main()
{
	int n1 = 10;
	int n2 = 30;
	{

		//int n3 = add(n1, n2);  // ���� ���� ����, ���� ���� ȣ�� (Call by value)
		//printf("n1= %d\n", n1);
		//printf("n2= %d\n", n2);
		//printf("n3= %d\n", n3);

		//n3 = add(&n1, &n2);  // ������ ���� ȣ�� (Call by reference)
		//printf("n1= %d\n", n1);
		//printf("n2= %d\n", n2);
		//printf("n3= %d\n", n3);

		//printf("\n");

		//add(n1, n2, &n3);
		//printf("n1= %d\n", n1);
		//printf("n2= %d\n", n2);
		//printf("n3= %d\n", n3);


		//printf("n1= %d\n", n1);
		//printf("n2= %d\n", n2);
	}

	//n1 = 5; 
	//n2 = 8;
	printf("������: %d,%d\n", n1, n2);
	exchange(&n1, &n2);
	printf("������: %d,%d\n", n1, n2);
	return 0;
}
