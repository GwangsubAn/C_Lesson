#include "mylib.h"

int main()
{
	srand((unsigned int)time(NULL));
	int arr[COUNT] = { 0 };
	randon_value(arr, COUNT);
	print_array(arr, COUNT);

	printf("===== �������� =====\n");
	ascending_sort(arr, COUNT);
	print_array(arr, COUNT);

	printf("===== ����Ž�� =====\n");
	int to_find;
	printf("ã�� ��: ");
	scanf("%d", &to_find);

	int idx = sequence_find(arr, COUNT, to_find);


	printf("===== ����Ž�� =====\n");
	int to_find;
	printf("ã�� ��: ");
	scanf("%d", &to_find);

	return 0;
}
