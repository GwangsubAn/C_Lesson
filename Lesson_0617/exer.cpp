#include "mylib.h"

int main()
{
	srand((unsigned int)time(NULL));
	int arr[COUNT] = { 0 };
	randon_value(arr, COUNT);
	print_array(arr, COUNT);

	printf("===== 순차정렬 =====\n");
	ascending_sort(arr, COUNT);
	print_array(arr, COUNT);

	printf("===== 순차탐색 =====\n");
	int to_find;
	printf("찾을 값: ");
	scanf("%d", &to_find);

	int idx = sequence_find(arr, COUNT, to_find);


	printf("===== 이진탐색 =====\n");
	int to_find;
	printf("찾을 값: ");
	scanf("%d", &to_find);

	return 0;
}
