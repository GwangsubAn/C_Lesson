
#define _CREDBG_MAP_ALLOC
#include<crtdbg.h>
#include "mylib.h"
typedef unsigned int UNIT;

int* alloc_meomory(const UNIT size)
{
	int* ptr = (int*)malloc(size);

	if (!ptr)
	{
		printf("�޸� �Ҵ����\n");
		return;
	}
	return ptr;
}

int alloc_memory(int** pptr,const UNIT size)  // const �� size ���� �����ƿ�� ����, �������� ������ ����
{
	*pptr = (int*)malloc(size);

	if (!*pptr)
	{
		printf("�޸� �Ҵ����\n");
		return;
	}
	return size;	
}

void print_array(const int* ptr, const UNIT size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%3d", ptr[i]);
	}
	printf("\n");
}
int main()
{
	//_CrtSetDbgFlag(_CrtIsMemoryBlock);

	int num = 10;  // ��������(�ڵ� ����) --> stack ���� �޸� ��� 
	int* ptr_num = NULL; // ������ ���� NULL�� �ʱ�ȭ --> �ּҰ� 0
	//ptr_num = &num;
	//int** pptr;// 2���� �����ʹ� 1���� �������� �ּҸ� �����Ҽ� �ִ�
				// �뵵 :  
	//pptr = &ptr_num;

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("arr: ");
	print_array(arr, 10);
	UNIT size = 10;

	int* pArr = NULL; // �����迭�� ���
	
	pArr = arr;
	printf("pArr: ");
	print_array(pArr, size);
	// pArr�� 10ĭ¥�� �迭�� �Ҵ�

	size = 10 * sizeof(int);
	//alloc_memory(&pArr, size);
	alloc_memory(size);	

	for (int i = 0; i < 10; i++)
	{
		pArr[i] = i * 2;
	}
	printf("pArr: ");
	print_array(pArr, 10);
	printf("arr: ");
	print_array(arr, 10);

	free(pArr);
	pArr = NULL;

	printf("���α׷��� ���� �����\n");

	// pArr�� 20ĭ¥�� �迭�� �Ҵ�

	return 0;
}