#include "mylib.h"  
int sum(int n);
int multiply(int n);

int main()
{
	printf("1~10까지의 합 :%d\n", sum(100));
	
	//int arr[10] = { 0 };
	int arr[COUNT] = { 0 };

	// time_t tm = time(NULL);
	// unsigned int init=(unsigned int)tm;
	// srand(init);

	// randomise(랜덤초기화)
	//srand((unsigned int)time(NULL));

	//randon_value(arr, COUNT);
	//print_array(arr, COUNT);

	//sequence_sort(arr, COUNT);
	//print_array(arr, COUNT);


	//// 순차 탐색
	//printf("순차탐색 =========\n");

	//int num;
	//printf("찾을값 : ");
	//scanf("%d", &num);

	//int idx = find_value(arr, COUNT, num);
	//if (idx < 0)
	//	printf("%d 못찾음\n", num);
	//else
	//	printf("%d는 %d 위치에 있음\n", num, idx);

	//// 바이너리 탐색
	//idx = find_binary(arr, COUNT, num);
	//if (idx < 0)
	//	printf("%d 못찾음\n", num);
	//else
	//	printf("%d는 %d 위치에 있음\n", num, idx);

	// 재귀 호출 함수 (Recursive Function)
	// 
	// 
	// 순차 정렬 : 기본적인 
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
		return 0; // 함수를 즉시 중단하고 호출한 쪽으로 결과를 전달

	return n + sum(n - 1);  //10 + (9 + 8 + sum(7)...)
}


int multiply(int n)
{
	if (n == 0)
		return 1;
	return n * multiply(n - 1);
}