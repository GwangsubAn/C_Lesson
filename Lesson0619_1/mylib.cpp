#include "mylib.h"

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

	while (start <= end)
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

void randon_value(int arr[], int cnt, int max_val)

{
	if (!arr || !cnt) return;

	for (int i = 0; i < cnt; i++)
	{
		int num = 0;;
		do
		{
			num = (rand() % max_val) + 1;
		} while (find_value(arr, cnt, num) >= 0);

		arr[i] = num;  //100으로 나누고 나머지를 취한다 100미만으로 제한
	}
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

// 1부터 10 팩토리얼
int factorial(int n)
{
	if (n == 0 || n == 1)
		return 1;
	return n * factorial(n - 1);
}

// Quick Sort
// left : 시작인덱스
// right : 마지막 인덱스
void my_qsort(int arr[], int left, int right)
{
	if (left >= right) return;
	// 반으로 나눌 기준값
	int pivot = arr[left];  // 일반적으로 배열의 시작값을 기준으로 
	int i = left + 1;
	int j = right;

	while (i <= j)
	{
		// while문의 조건식이 거짓이 되면 증가(감소)를 중단함
		while (i <= right && arr[i] <= pivot) i++;

		// 아직 i와 j가 교차하지 않았다면 두값을 서로 교환한다
		while (j >= left + 1 && arr[j] >= pivot) j--;
		if (i <= j) swap(&arr[i], &arr[j]);
	}
	swap(&arr[left], &arr[j]);

	my_qsort(arr, left, j - 1);
	my_qsort(arr, j + 1, right);

}

void ascending_sort(int arr[], int count)
{
	if (!arr || !count) return;

	for (int i = 0; i < count - 1; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (arr[i] > arr[j])
			{
				swap(arr + i, arr + j);
			}
		}
	}
}

int sequence_find(int arr[], int count, int to_find)
{

	return 1;
}


