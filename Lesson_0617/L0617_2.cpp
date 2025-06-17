#include "mylib.h"  

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
	//printf("1~10까지의 합 :%d\n", sum(100));
	//printf("1~10 팩토리얼 :%d\n", factorial(10));
	my_qsort(arr, 0, COUNT-1);
	print_array(arr, COUNT);


	return 0;
}


// 프로그래머 데브코스 싸이트 : 코딩테스트 문제 연습

