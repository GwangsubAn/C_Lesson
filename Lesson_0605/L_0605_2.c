#define _CRT_SECURE_NO_WARNINGS   // scanf 함수 에러 무시  
#include <stdio.h> // 표준 입출력에 관련된 함수들이 정의된 헤더
#include <conio.h>  // Windows OS전용 입출력 관련 함수 정의 헤더
#include <string.h>  // Windows OS전용 입출력 관련 함수 정의 헤더


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
	//char sz[] = { 'A','B','C','\0','D','E','F','G'};  // 0또는 \0(null terminated)이 들어가 있으면 문자열
	//int count = sizeof(sz) / sizeof(char);

	//printf("sz배열의 크기 : %d bytes\n", sizeof(sz));
	//printf("sz배열의 길이 : %d 개\n", count);

	//for (int i = 0; i < count; i++)
	//{
	//	printf("%c", sz[i]);
	//}
	//	printf("\n");
	//	printf("%s\n",sz);
	//	printf("sz 문자열의 길이 %d \n", strlen(sz));
	//}

	//char sz[] = { 'A','B','C','D','E','F','G','\0' };  // 0또는 \0(null terminated)이 들어가 있으면 문자열
	//int count = sizeof(sz) / sizeof(char);

	//for (int i = 0; i < count - 1; i++)
	//{
	//	sz[i] += 32;
	//}
	//printf("\n");
	//printf("%s", sz);
	//printf("\n");


	////// char sz2[] = { 'H','e','l','l','o',' ','W','o','r','l','d','\0' }; // 배열이자 문자열
	//char  sz2[] = "Hello World";  // 문자열 이자 배열
	//// 모든 문자열은 배열

	//printf("sz2 문자열의 길이 : %d\n", strlen(sz2));
	//printf("sz2 배열의 길이 : %d\n", sizeof(sz2));


	//for (int i = 0; i < strlen(sz2); i++)
	//{
	//	if (sz2[i] >= 'a' && sz2[i] <= 'z')
	//	{
	//		sz2[i] -= 32;
	//	}
	//}	
	//printf("%s\n", sz2);


	char sz3[] = "안녕하세요";
	printf("%s\n", sz3);
	printf("sz3 문자열의 길이 : %d\n", strlen(sz3));
	printf("sz3 배열의 길이 : %d\n", sizeof(sz3));


	return 0;
}