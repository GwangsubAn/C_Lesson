#include "mylib.h"

int main()
{
	//char sz[] = "Hello"; // {'H',''}

	//char sz[30] = { 0 };
	// scanf();

	//fgets(sz, 30, stdin);

	// 배열의 길이 : 6
	//printf("배열의 길이: %u\n", sizeof(sz));

	// 문자열의 길이 : 5 
	//printf("문자열의 길이: %u\n", strlen(sz));

	//printf("%s\n", sz);

	//

	const char* psz = "Hello";
	//printf("%s\n", sz);

	//psz = "SBS Academy";  // 상수값
	//printf("%s\n", sz);

	//printf("문자열의 길이:%u\n", my_strlen(psz));

	// 2차원 배열 :  5개짜리 1차원 배열이  3개 있음
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
	printf("arr[1] : %p\n", arr[1]);  // 시작주소


	// 1차원 배열로 당첨번호 배열을 생성하세요
	int wins[COL]; // 당첨번호 : 1,2,3,4,5,6



	// 당첨번호 1차원 베열 생성
	// 
	// lotto : 5 x 6 

	srand((unsigned int)time(NULL));
	int lotto[ROW][COL] = { 0 };
	printf("==== 사용자 로또 번호 ====\n");

	for (int i = 0; i < ROW; i++)
	{
		randon_value(lotto[i], COL,45);
		my_qsort(lotto[i],0,COL-1);
		//sequence_sort(lotto[i], COL);
		print_array(lotto[i], COL);
	}


	// 당첨번호(wins)와 arr[i]배열의 당첨 갯수 카운트하여 출력하세요
	
	//  1,2,3,4,5,6 : 0 개 일치 
	//  1,2,3,4,5,6 : 1 개 일치 
	//  1,2,3,4,5,6 : 2 개 일치 
	//  1,2,3,4,5,6 : 2 개 일치 
	//  1,2,3,4,5,6 : 3 개 일치 


	 int* ptr1[COL];   // 각 아이템이 포인터 변수(int *)인 1차원 변수
	 int(*ptr2)[COL] = lotto; // 2차원 배열을 가르키는 포인터  변수 (초기화 필요)

	 printf("%d", lotto[0][0]);  
	 printf("%d", ptr2[0][0]);


	return 0;
}