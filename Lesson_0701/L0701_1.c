
#define _CREDBG_MAP_ALLOC
#include<crtdbg.h>
#include "mylib.h"
typedef unsigned int UNIT;

int* alloc_meomory(const UNIT size)
{
	int* ptr = (int*)malloc(size);

	if (!ptr)
	{
		printf("메모리 할당못함\n");
		return;
	}
	return ptr;
}

int alloc_memory(int** pptr,const UNIT size)  // const 는 size 값을 변경시틸수 없음, 음수값을 가질수 없음
{
	*pptr = (int*)malloc(size);

	if (!*pptr)
	{
		printf("메모리 할당못함\n");
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

	int num = 10;  // 지역변수(자동 변수) --> stack 영역 메모리 사용 
	int* ptr_num = NULL; // 포인터 변수 NULL로 초기화 --> 주소가 0
	//ptr_num = &num;
	//int** pptr;// 2차원 포인터는 1차원 포인터의 주소를 저장할수 있다
				// 용도 :  
	//pptr = &ptr_num;

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("arr: ");
	print_array(arr, 10);
	UNIT size = 10;

	int* pArr = NULL; // 가변배열로 사용
	
	pArr = arr;
	printf("pArr: ");
	print_array(pArr, size);
	// pArr에 10칸짜리 배열을 할당

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

	printf("프로그램이 정상 종료됨\n");

	// pArr에 20칸짜리 배열을 할당

	return 0;
}