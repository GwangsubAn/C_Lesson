#define _CRT_SECURE_NO_WARNINGS   // scanf �Լ� ���� ����  
#include <stdio.h> // ǥ�� ����¿� ���õ� �Լ����� ���ǵ� ���
#include <conio.h>  // Windows OS���� ����� ���� �Լ� ���� ���
#include <stdlib.h> // ���� ���Ǵ� ��ƿ��Ƽ (���Ǽ��� �����ִ�) �Լ����� ���ǵ� ���

/*
1    2    c    4    5    c    7    8    c   10
11   12   c    14   15   c    17   18   c   20
21   22   23   24   25   26   27   28   29   30
 c    c    C    c    c    c    c    c    c   40
41   42   43   44   45   46   47   48   49   50
51   52   53   54   55   56   57   58   59   60
61   62   63   64   65   66   67   68   69   70
71   72   73   74   75   76   77   78   79   80
81   82   83   84   85   86   87   88   89   90
91   92   93   94   95   96   97   98    C  100
*/

int main()
{
	int ten;
	int ill;

	for (int i = 1; i <= 100; i++)
	{
		// 1~100������ 
		/*
		if (i % 10 == 0)
			printf("\n");
		else
			printf("%d\t", i);
		*/

		ten = i / 10; // 10�� �ڸ����� �и�
		ill = i % 10; // 1�� �ڸ����� �и�
		char ch = 'a'; // 

		if (ten % 3 == 0 && ten != 0)  // 
			ch = 'c';

		if (ill % 3 == 0 && ch == 'c' && ill != 0) //
			ch = 'C';
		else if (ill % 3 == 0 && ill != 0)
			ch = 'c';

		if (ch == 'c' || ch == 'C')
			printf("%c\t", ch);
		else
			printf("%d\t", i);

		if (i % 10 == 0)
			printf("\n");
	}

	return 0;
}