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

// ���� �˰���: ���� ����
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
// ����Ž�� �Լ�
// find_value �Լ� _ ��ȯ�� : int ã������ �ε��� , ���ٸ� -1�� ��ȯ
// �Ű�����
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

//���� Ž��
int find_binary(int arr[], int count, int to_find)
{
	int start = 0;   //�ʱ� �ε���
	int end = count - 1;  // ������ �ε���

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
		arr[i] = rand() % 100;  //100���� ������ �������� ���Ѵ� 100�̸����� ����
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

		arr[i] = num;  //100���� ������ �������� ���Ѵ� 100�̸����� ����
	}
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

// 1���� 10 ���丮��
int factorial(int n)
{
	if (n == 0 || n == 1)
		return 1;
	return n * factorial(n - 1);
}

// Quick Sort
// left : �����ε���
// right : ������ �ε���
void my_qsort(int arr[], int left, int right)
{
	if (left >= right) return;
	// ������ ���� ���ذ�
	int pivot = arr[left];  // �Ϲ������� �迭�� ���۰��� �������� 
	int i = left + 1;
	int j = right;

	while (i <= j)
	{
		// while���� ���ǽ��� ������ �Ǹ� ����(����)�� �ߴ���
		while (i <= right && arr[i] <= pivot) i++;

		// ���� i�� j�� �������� �ʾҴٸ� �ΰ��� ���� ��ȯ�Ѵ�
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


