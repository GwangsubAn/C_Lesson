#define _CRT_SECURE_NO_WARNINGS   // scanf 함수 에러 무시  
#include <stdio.h> // 표준 입출력에 관련된 함수들이 정의된 헤더
#include <string.h>  // 문자열 관련 함수 정의 헤더
#include <stdlib.h>  // 문자열 관련 함수 정의 헤더
#include <time.h>  // 

#define COUNT 10  // 매크로 상수 정의

// void randon_value(int* arr, int cnt)
void randon_value(int arr[], int cnt)

{
	if (!arr || !cnt)
		return;

	for (int i = 0; i < cnt; i++)
	{
		arr[i] = rand() % 100;  //100으로 나누고 나머지를 취한다 100미만으로 제한
	}
}

// void print_array(int arr[], int cnt)
void print_array(int* arr, int cnt)
{
	if (!arr || !cnt)
		return;
	for (int i = 0; i < cnt; i++)
	{
		//printf("%3d ", arr[i]);
		printf("%3d ", *(arr + i));  // i * sizeof(type)
	}
	printf("\n");
}

void swap(int* pa, int* pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

// 정렬 알고리즘: 순차 정렬
void sequence_sort(int* arr, int count)
{
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			//if (arr[i] > arr[j])
			if (*(arr + i) > *(arr + j))

				swap(arr + i, arr + j);
			// swap(&arr[i],&arr[j]);
		}
	}
}
// 순차탐색 함수
// find_value 함수 _ 반환값 : int 찾은값의 인덱스 , 없다면 -1을 반환
// 매개변수
int find_value(int arr[], int count, int to_find)
{
	for (int i = 0; i < count; i++)
	{
		if (arr[i] == to_find)
		{
			return i;
		}
	}
	return -1;
}

//이진 탐색
int find_binary(int arr[], int count, int to_find)
{
	int start = 0;   //초기 인덱스
	int end = count - 1;  // 마지막 인덱스

	while (start < end)
	{
		int mid = (start + end) / 2;
		if (arr[mid] == to_find)
			return mid;
		if (arr[mid] > to_find)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return -1;
}

int main()
{
	//int arr[10] = { 0 };
	int arr[COUNT] = { 0 };

	// time_t tm = time(NULL);
	// unsigned int init=(unsigned int)tm;
	// srand(init);

	// randomise(랜덤초기화)
	srand((unsigned int)time(NULL));

	randon_value(arr, COUNT);
	print_array(arr, COUNT);

	sequence_sort(arr, COUNT);
	print_array(arr, COUNT);


	// 순차 탐색
	printf("순차탐색 =========\n");

	int num;
	printf("찾을값 : ");
	scanf("%d", &num);

	int idx = find_value(arr, COUNT, num);
	if (idx < 0)
		printf("%d 못찾음\n", num);
	else
		printf("%d는 %d 위치에 있음\n", num, idx);

	// 바이너리 탐색

	return 0;
}

