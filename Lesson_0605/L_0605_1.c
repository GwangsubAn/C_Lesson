#define _CRT_SECURE_NO_WARNINGS   // scanf �Լ� ���� ����  
#include <stdio.h> // ǥ�� ����¿� ���õ� �Լ����� ���ǵ� ���
#include <conio.h>  // Windows OS���� ����� ���� �Լ� ���� ���

int main()
{
	// ������
	char ch = 97;  // 1byte
	short sh; //  2Byte
	int num; //4Byte

	// �Ǽ���
	float r1 = 3.14; //4Byte
	double f2; //8Byte
	printf("ch������ ���� %d�̰� ch������ �Ҵ�ũ��� %d Bytes\n", ch, sizeof(ch));
	printf("r1������ ���� %0.1f�̰� r1������ �Ҵ�ũ��� %d Bytes\n", r1, sizeof(double));

	// �迭(Array)
	// 
	int nums[5] = { 1,2,3,4,5 };  // 
	printf("nums ù��° %d\n", nums[0]);
	printf("nums �ֹ�° %d\n", nums[1]);
	printf("nums �ټ���° %d\n", nums[4]);

	nums[0] = 10;
	nums[1] = 3.14;
	printf("nums ù��° %d\n", nums[0]);
	printf("nums �ֹ�° %d\n", nums[1]);

	short total = 0;
	short score[] = { 100,90,80,70,67 };
	//score[0],score[1],score[2]...�� ������� ���� ����

	for (int i = 0; i < 5; i++)
	{
		total += score[i];
	}
	printf("����: %d��\n", total);
	printf("���: %.2f��\n", total/5.f); // .0�� ��������

	return 0;
}