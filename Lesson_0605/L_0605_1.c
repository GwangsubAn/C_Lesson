#define _CRT_SECURE_NO_WARNINGS   // scanf 함수 에러 무시  
#include <stdio.h> // 표준 입출력에 관련된 함수들이 정의된 헤더
#include <conio.h>  // Windows OS전용 입출력 관련 함수 정의 헤더

int main()
{
	// 정수형
	char ch = 97;  // 1byte
	short sh; //  2Byte
	int num; //4Byte

	// 실수형
	float r1 = 3.14; //4Byte
	double f2; //8Byte
	printf("ch변수의 값은 %d이고 ch변수의 할당크기는 %d Bytes\n", ch, sizeof(ch));
	printf("r1변수의 값은 %0.1f이고 r1변수의 할당크기는 %d Bytes\n", r1, sizeof(double));

	// 배열(Array)
	// 
	int nums[5] = { 1,2,3,4,5 };  // 
	printf("nums 첫번째 %d\n", nums[0]);
	printf("nums 주번째 %d\n", nums[1]);
	printf("nums 다섯번째 %d\n", nums[4]);

	nums[0] = 10;
	nums[1] = 3.14;
	printf("nums 첫번째 %d\n", nums[0]);
	printf("nums 주번째 %d\n", nums[1]);

	short total = 0;
	short score[] = { 100,90,80,70,67 };
	//score[0],score[1],score[2]...는 변수명과 같은 개념

	for (int i = 0; i < 5; i++)
	{
		total += score[i];
	}
	printf("총점: %d점\n", total);
	printf("평균: %.2f점\n", total/5.f); // .0은 생략가능

	return 0;
}