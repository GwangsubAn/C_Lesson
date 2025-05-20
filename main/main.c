
#define _CRT_SECURE_NO_WARNINGS   // scanf 함수 에러 무시  
#include<stdio.h>

int main()
{
		// 출력함수
	{
		//printf("Welcome \tC");
		//printf("\b\bc++\n"); 
		//printf("경기도 \\ \r 수원시\n");  //\". \' 
		//printf("C:\\ags\\test");  //\". \' 

		int age = 10;  // 4
		char ch = 'K'; // 1
		short kor = 96; // 2
		float pi = 3.14f;  // 4 Byte  F: 한정 연산자
		double math = 42.195;

		// 형식 문자
		//printf("나이는 %d살 입니다\n", age);
		//printf("국적은 %corea 입니다\n", ch);
		//printf("국어점수 : %hd\n", kor);  // short형 정수
		//printf("PI : %f\n", pi);
		//printf("PI : %4.2f\n", pi);  // 4자리 확보 소수점 2자리 표현
		//printf("PI : %6.3f\n", math);  // 6자리 확보 소수점 3자리 표현
		//printf("PI : %6.1f\n", math);  // 6자리 확보 소수점 1자리 표현
		//printf("PI : %.3f\n", math);  // 6자리 확보 소수점 1자리 표현
		//printf("%5d\n", age);  //5자리 확보 우측정렬
		//printf("%-5d\n", age);//5자리 확보 좌측정렬

		// 16진수 

		printf("10 = %X\n", age);  // 16진수
		printf("상위 %d%%\n", kor); // % 표시 방법


		// %s 문자열 출력
		printf("제이름은 %s 입니다\n", "AGS");

		// %p : 특정 객체의 메모리 주소를 출력한다
		printf("ch의 메모리 주소 : %p\n", &ch);  //& 주소연산자, 변수앞에 단독으로 사용시

		printf("내이름은 %s 이고 나이는 %d", "ags", age);

		// 표준 입력함수 : scanf	
		// Compiler : GCC, MSC,  


		printf("\n\n==============================================\n");
		printf("나이를 입력하세요 >>> ");
		scanf("%d",&age);

		printf("내이름은 %s 이고 나이는 %d\n", "ags", age);

		float height;
		printf("당신의 키를 입력 >>> ");
		scanf("%f", &height);
		printf("입력받은 키는 %.2Fcm입니다\n",height);

		scanf("%c", &ch);

		printf("알파벳 한 글자 입력 >>> ");
		scanf("%c", &ch);
		printf("입력 받은 문자는 %c\n",ch);
		
		// printf("국어점수 입력 :  >>> ");
		// scanf("%hd", &kor);  // Short형 변수 type  --> hd사용
		// printf("입력된점수 %d점\n ",kor);

		short eng;
		short history;

		printf("국어, 영어 역사 점수 입력 : ");
		scanf("%hd %hd %hd", &kor, &eng, &history);
		printf("국어, 영어 역사 점수는 %hd %hd %hd입니다", kor, eng, history); 

		// printf("%hd%d%ld%lld%u")
		// hf: half decimal, d: decimal, ld:long decimal, lld:long long decimal



	}
	return 0;
}


