#define _CRT_SECURE_NO_WARNINGS   // scanf �Լ� ���� ����  
#include <stdio.h> // ǥ�� ����¿� ���õ� �Լ����� ���ǵ� ���
#include <conio.h>  // Windows OS���� ����� ���� �Լ� ���� ���
#include <string.h>  // ���ڿ� ���� �Լ� ���� ���

int add(int a, int b)
{
	a = 100;
	b = 200;
	return a + b;
}

int main()
{	
	{
		// Local (����)
	// 
	short num; // �޸� 2 ����Ʈ Ȯ��(����������, �ý����� �˾Ƽ� ��������) 
	num = 5;   // Ȯ���� �޸� ���� num�� ���� 5�� �����϶�
	
	printf("num= %d\n", num);
	printf("num�� ũ��: %ubytes\n", sizeof(num)); // %u : unsigned integer
	printf("num�� �ּ�: %p\n", &num);

	// ������(�����ͺ���) : ������ �ּҸ� ���� �Ҽ� �ִ�, �ּҸ� �����ϴ� ���� windows64 �ý��ۿ����� 8Bytes
	// 
	short* addr = &num; // short*���� ���� addr�� �����ϰ� num�� �ּҸ� �����Ѵ�.
	printf("addr�� ũ��: %u\n", sizeof(addr));
	printf("addr�� ��: %p\n", addr);

	printf("addr�� �����ϴ� ��= %d\n", *addr);
	*addr = 20;
	printf("num= %d\n", num);

	/*addr = 100;
	printf("addr�� ��: %p\n", addr);*/


	printf("\n\n");


	long long num2 = 200000L;
	printf("num2= %lld\n", num2);
	printf("num2�� ũ��: %ubytes\n", sizeof(num2)); // %u : unsigned integer
	printf("num2�� �ּ�: %p\n", &num2);

	long long* addr2 = &num2;
	printf("addr2�� ũ��: %u\n", sizeof(addr2));	
	printf("addr2�� ��: %p\n", addr2);
	printf("addr2 �����ϴ� ��= %lld", *addr2);
	}
	

	return 0;
}
