#define _CRT_SECURE_NO_WARNINGS   // scanf �Լ� ���� ����  
#include <stdio.h> // ǥ�� ����¿� ���õ� �Լ����� ���ǵ� ���
#include <conio.h>  // Windows OS���� ����� ���� �Լ� ���� ���
#include <stdlib.h> // ���� ���Ǵ� ��ƿ��Ƽ (���Ǽ��� �����ִ�) �Լ����� ���ǵ� ���

int main()
{

	// for(�ʱ��; ���ǽ�;������)
	//{

	//}
	/*int i;
	for (i = 1; i < 10; i++)
	{
		printf("%d\n", i);
	}
	*/
	for (int j = 1; j < 10; j++)
	{
		for (int i = 2; i < 10; i++)
		//{
			printf("%d x %d = %d\t", i, j,j*i);
		//}
		printf("\n");
	}

	// i = 1;
	// printf("%d\n", n);




	return 0;
}