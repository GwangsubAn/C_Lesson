#include "mylib.h"  
int sum(int n);
int multiply(int n);

int main()
{
	printf("1~10������ �� :%d\n", sum(100));
	
	//int arr[10] = { 0 };
	int arr[COUNT] = { 0 };

	// time_t tm = time(NULL);
	// unsigned int init=(unsigned int)tm;
	// srand(init);

	// randomise(�����ʱ�ȭ)
	//srand((unsigned int)time(NULL));

	//randon_value(arr, COUNT);
	//print_array(arr, COUNT);

	//sequence_sort(arr, COUNT);
	//print_array(arr, COUNT);


	//// ���� Ž��
	//printf("����Ž�� =========\n");

	//int num;
	//printf("ã���� : ");
	//scanf("%d", &num);

	//int idx = find_value(arr, COUNT, num);
	//if (idx < 0)
	//	printf("%d ��ã��\n", num);
	//else
	//	printf("%d�� %d ��ġ�� ����\n", num, idx);

	//// ���̳ʸ� Ž��
	//idx = find_binary(arr, COUNT, num);
	//if (idx < 0)
	//	printf("%d ��ã��\n", num);
	//else
	//	printf("%d�� %d ��ġ�� ����\n", num, idx);

	// ��� ȣ�� �Լ� (Recursive Function)
	// 
	// 
	// ���� ���� : �⺻���� 
	// Quick Sort
	return 0;
}

int sum(int n)
{
	/*	int total = 0;
		for (int i = 1; i <= n; i++)
		{
		}*/

	if (n == 0)
		return 0; // �Լ��� ��� �ߴ��ϰ� ȣ���� ������ ����� ����

	return n + sum(n - 1);  //10 + (9 + 8 + sum(7)...)
}


int multiply(int n)
{
	if (n == 0)
		return 1;
	return n * multiply(n - 1);
}