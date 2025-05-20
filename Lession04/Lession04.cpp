#include<stdio.h>

int main()
{


	// 연산자 (Operator)
	// 산술 : +, -, *, /, %(나머지)
	// 대입 : =, +=, -=, *=, /=, %= 
	// 증감 : ++, --,
	// 비교 : >, >=, <, <=, ==, !=
	// 논리 : &&, ||, !
	// 비트 : <<, >>, &, |, ^, ~
	// 기타 : ? :, &(변수앞에 사용하여 주소를 가르킴), *(역 참조 연산자 - 주소가 가르키는 변수)

	// 산술 : +, -, *, /, %(나머지)
	{
		int n1 = 10;
		int n2 = 3;
		int n3;
		float f1;

		//n3 = n1 + n2;  // 연산자 2개, 우선순위에 의해 
		//printf("%d + %d = %d\n", n1, n2, n3);

		//n3 = n1 - n2;  // 연산자 2개, 우선순위에 의해 
		//printf("%d - %d = %d\n", n1, n2, n3);

		//n3 = n1 * n2;  // 연산자 2개, 우선순위에 의해 
		//printf("%d * %d = %d\n", n1, n2, n3);

		//f1 = n1 / (float)n2;  // 실수가 정수보다 커서 정수를 포함하여  형 변환 
		//printf("%d / %d = %f\n", n1, n2, f1);

		//n3 = n1 % n2;  // 연산자 2개, 우선순위에 의해 
		//printf("%d %% %d = %d\n", n1, n2, n3);

		//// 형 변환 (Type Cast) 
		//char n = 100;
		//n1 = 130;
		//n = n1; // 묵시적인 형변환
		//printf("%d\n", n);
		//n = (char)n1; // 명시적인 형변환
		//f1 = 3.3333F;
		//n1 = f1; // 묵시적인 형변환

		//n1 = (int) f1;// 명시적인 형변환



	// 대입 : =, +=, -=, *=, /=, %= 
		// L.Value (변수)  = R.Value(변수, 상수, 함수, 수식)
		int sum = 0;

		//sum += n1; // sum=sum+n1 sum :10
		//sum += n1; // sum=sum-n1 sum :20
		//sum -= n1; // sum=sum*n1 sum :20	
		//sum /= n1; // sum=sum/n1 sum :20
		//sum %= n1; // sum=sum%n1 sum :20sum :20
		//printf("%d\n", sum);

		// 비교 : >, >=, <, <=, ==, !=
		// 비교연산의 결과는 논리값(1,0)
		int result;

		result = 1 > 5;  // 1 > 5 결과가 임시변수에 저장 된다 (중요!!!)
		printf("result : %d\n", result);

		result = 1 <= 5;
		printf("result : %d\n", result);

		result = 1 == 5;
		printf("result : %d\n", result);

		result = 1 != 5;
		printf("result : %d\n", result);

		// 논리 : &&(AND), ||(OR), !(NOT)
		printf("=========== 논 리 ================\n");

		n1 = -5;
		sum = 0;
		result = n1 && sum;  // T && F
		printf("&& 연산결과 result : %d\n", result);

		result = n1 || sum; // T || F
		printf("|| 연산결과 result : %d\n", result);

		result = !n1;  //
		printf("! 연산결과 result : %d\n", result);

		// 증감 : ++, --
		printf("========== 증 감 =================\n");

		n1 = 0;

		n1++;  // n1= n1 + 1
		printf("++ 연산결과 : %d\n", n1++); // n1 :  

		++n1;  // n1= n1 + 1  // 3
		printf("++ 연산결과 : %d\n", ++n1); // 4

		n1--;  // n1= n1 - 1
		printf("-- 연산결과 : %d\n", n1);

		// 연산자 우선 순위 : 
		/*
		1 : ++,-- (증감 연산자)
		2 : +, -  (부호 연산자)
		3 : *, /, %
		4 : +, -
		5 : >, >=, <, <=
		6 : ==, !=
		7 : &&(AND), ||(OR), !(NOT) (논리 연산자)		
		8 : = (대입연산자)
		*/











	}



	return 0;

}
