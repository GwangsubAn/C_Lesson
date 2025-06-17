#define _CRT_SECURE_NO_WARNINGS   // scanf �Լ� ���� ����  
#include <stdio.h> // ǥ�� ����¿� ���õ� �Լ����� ���ǵ� ���
#include <string.h>  // ���ڿ� ���� �Լ� ���� ���
#include <stdlib.h>  // ���ڿ� ���� �Լ� ���� ���
#include <time.h>  // 

#define COUNT 10  // ��ũ�� ��� ����

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

	// randomise(�����ʱ�ȭ)
	srand((unsigned int)time(NULL));

	randon_value(arr, COUNT);
	print_array(arr, COUNT);

	sequence_sort(arr, COUNT);
	print_array(arr, COUNT);


	// ���� Ž��
	printf("����Ž�� =========\n");

	int num;
	printf("ã���� : ");
	scanf("%d", &num);

	int idx = find_value(arr, COUNT, num);
	if (idx < 0)
		printf("%d ��ã��\n", num);
	else
		printf("%d�� %d ��ġ�� ����\n", num, idx);

	// ���̳ʸ� Ž��

	return 0;
}

