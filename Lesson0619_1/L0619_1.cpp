#include "mylib.h"

int main()
{
	//char sz[] = "Hello"; // {'H',''}

	//char sz[30] = { 0 };
	// scanf();

	//fgets(sz, 30, stdin);

	// �迭�� ���� : 6
	//printf("�迭�� ����: %u\n", sizeof(sz));

	// ���ڿ��� ���� : 5 
	//printf("���ڿ��� ����: %u\n", strlen(sz));

	//printf("%s\n", sz);

	//

	const char* psz = "Hello";
	//printf("%s\n", sz);

	//psz = "SBS Academy";  // �����
	//printf("%s\n", sz);

	//printf("���ڿ��� ����:%u\n", my_strlen(psz));

	// 2���� �迭 :  5��¥�� 1���� �迭��  3�� ����
	int arr[3][5] = { {1,2,3,4,5},{11,12,13,14,15},{21,22,23,24,25} };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}

	printf("arr : %p\n", arr);
	printf("arr[0][0] : %p\n", &arr[0][0]);
	printf("arr[0][4] : %p\n", &arr[0][4]);
	printf("arr[1][0] : %p\n", &arr[1][0]);
	printf("arr[1] : %p\n", arr[1]);  // �����ּ�


	// 1���� �迭�� ��÷��ȣ �迭�� �����ϼ���
	int wins[COL]; // ��÷��ȣ : 1,2,3,4,5,6



	// ��÷��ȣ 1���� ���� ����
	// 
	// lotto : 5 x 6 

	srand((unsigned int)time(NULL));
	int lotto[ROW][COL] = { 0 };
	printf("==== ����� �ζ� ��ȣ ====\n");

	for (int i = 0; i < ROW; i++)
	{
		randon_value(lotto[i], COL,45);
		my_qsort(lotto[i],0,COL-1);
		//sequence_sort(lotto[i], COL);
		print_array(lotto[i], COL);
	}


	// ��÷��ȣ(wins)�� arr[i]�迭�� ��÷ ���� ī��Ʈ�Ͽ� ����ϼ���
	
	//  1,2,3,4,5,6 : 0 �� ��ġ 
	//  1,2,3,4,5,6 : 1 �� ��ġ 
	//  1,2,3,4,5,6 : 2 �� ��ġ 
	//  1,2,3,4,5,6 : 2 �� ��ġ 
	//  1,2,3,4,5,6 : 3 �� ��ġ 


	 int* ptr1[COL];   // �� �������� ������ ����(int *)�� 1���� ����
	 int(*ptr2)[COL] = lotto; // 2���� �迭�� ����Ű�� ������  ���� (�ʱ�ȭ �ʿ�)

	 printf("%d", lotto[0][0]);  
	 printf("%d", ptr2[0][0]);


	return 0;
}