#define _CRT_SECURE_NO_WARNINGS   // scanf �Լ� ���� ����  
#include <stdio.h> // ǥ�� ����¿� ���õ� �Լ����� ���ǵ� ���
#include <conio.h>  // Windows OS���� ����� ���� �Լ� ���� ���
#include <string.h>  // Windows OS���� ����� ���� �Լ� ���� ���


int main()
{
	{
		/*int nums[5] = { 1,2,3,4,5 };

		int count = sizeof(nums) / sizeof(int);

		for (int i = 0; i < count; i++)
		{
			nums[i] = i + 1;
			printf("nums[%d] : %d\n", i, nums[i]);
		}
		int nums2[] = { 1,2,3,4,5,2,3,4,5 };
		 count = sizeof(nums2) / sizeof(int);
		 printf("%d\n", sizeof(nums2));*/
	}
	//{

	//char sz[] = { 65,66,67,68,69,70,71 };
	//char sz[] = { 'A','B','C','\0','D','E','F','G'};  // 0�Ǵ� \0(null terminated)�� �� ������ ���ڿ�
	//int count = sizeof(sz) / sizeof(char);

	//printf("sz�迭�� ũ�� : %d bytes\n", sizeof(sz));
	//printf("sz�迭�� ���� : %d ��\n", count);

	//for (int i = 0; i < count; i++)
	//{
	//	printf("%c", sz[i]);
	//}
	//	printf("\n");
	//	printf("%s\n",sz);
	//	printf("sz ���ڿ��� ���� %d \n", strlen(sz));
	//}

	//char sz[] = { 'A','B','C','D','E','F','G','\0' };  // 0�Ǵ� \0(null terminated)�� �� ������ ���ڿ�
	//int count = sizeof(sz) / sizeof(char);

	//for (int i = 0; i < count - 1; i++)
	//{
	//	sz[i] += 32;
	//}
	//printf("\n");
	//printf("%s", sz);
	//printf("\n");


	////// char sz2[] = { 'H','e','l','l','o',' ','W','o','r','l','d','\0' }; // �迭���� ���ڿ�
	//char  sz2[] = "Hello World";  // ���ڿ� ���� �迭
	//// ��� ���ڿ��� �迭

	//printf("sz2 ���ڿ��� ���� : %d\n", strlen(sz2));
	//printf("sz2 �迭�� ���� : %d\n", sizeof(sz2));


	//for (int i = 0; i < strlen(sz2); i++)
	//{
	//	if (sz2[i] >= 'a' && sz2[i] <= 'z')
	//	{
	//		sz2[i] -= 32;
	//	}
	//}	
	//printf("%s\n", sz2);


	char sz3[] = "�ȳ��ϼ���";
	printf("%s\n", sz3);
	printf("sz3 ���ڿ��� ���� : %d\n", strlen(sz3));
	printf("sz3 �迭�� ���� : %d\n", sizeof(sz3));


	return 0;
}