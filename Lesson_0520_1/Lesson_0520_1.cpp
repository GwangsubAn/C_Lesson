// Lesson_0520_1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    // 비트 : <<, >>, &, |, ^, ~
    // 
    short n3 = 0;

    short n1 = 3;  // 0011
    short n2 = 5;  // 0101

    n3 = n1 & n2;  // 0001
    printf("n3 = %d\n", n3);
    
    n3 = n1 | n2;  // 0111
    printf("n3 = %d\n", n3);

    n3 = ~ n1; // 0111
    printf("n3 = %d\n", n3);


    n3 = n1 ^ n2;  // 0001
    printf("n3 = %d\n", n3);

    n3 = n1 << 2;
    printf("n3 = %d\n", n3);

    n3 = n3 >> 2;
    printf("n3 = %d\n", n3);










    return 0;
}

