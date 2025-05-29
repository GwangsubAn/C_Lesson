#define _CRT_SECURE_NO_WARNINGS   // scanf �Լ� ���� ����  
#include <stdio.h> // ǥ�� ����¿� ���õ� �Լ����� ���ǵ� ���
#include <conio.h>  // Windows OS���� ����� ���� �Լ� ���� ���
#include <stdlib.h> // ���� ���Ǵ� ��ƿ��Ƽ (���Ǽ��� �����ִ�) �Լ����� ���ǵ� ���

// �Լ� ��� ��Ģ
// 1. ȣ���ϱ� ���� �Լ��� ���ǰ� �Ǿ� �־�� �Ѵ�
// 2. �Լ��� ȣ���ҋ��� ���ǵ� ���İ� ������ �����ϰ� ȣ��
// 3. �������� �ۼ� ��Ģ�� �����ϰ� ���� �Ѵ�
// 
// �Լ��� ����ϴ� ����:�ڵ��� ����(���꼺�� ���δ�)
// 
// �Լ��� �����ϴ� ���
// �Լ���(�ڷ���) �Լ��� ([�Ű�����1,�Ű�����2,...]) {}
// �Ű����� : Parameters, Arguments, �μ�, ����

int add_number(int n1, int n2) // �Ű����� n1,n2:ȣ��η� ���� �ʱ�ȭ�� �Ǿ� ���� ��������
{
	return n1 + n2; // return�� �Լ� ����� ó���ϰ� ����� ȣ��η� ��ȯ�ϴ� ��ɹ�
}

// overloading (�Լ� ������)
//int add_number(int n1, int n2, int n3)
//{
//	return n1 + n2 + n3;
//}

// void : ��ȯ���� ���� ,ȣ���� �ʿ� ����� �������� �ʴ´�
void display_number(int n)
{
	printf("�Ű����� : %d\n", n);
	return; // �Ǵ� ��� ����
}

// 
float get_pi()
{
	return 3.14159F;
}
int multyply(int n1, int n2)
{
	int result = 0;
	for (int i = 0; i < n2; i++)
	{
		result = add_number(result, n1);
	}
	return  result;
}

// 1���� n������ ���� ���Ͽ� ��ȯ�ϴ� �Լ��� �����ϰ� 
int sum_numbers(n)
{
	int result = 0;
	for (int i = 1; i <= n; i++)
		result += i;
	return result;
}

// ������(float)�� �Է��ϸ� ������ ���ϴ� �Լ��� �����ϰ� 
// �Ű������� ������ �Է�
float area(float radius)
{
	float result = 0.0;
	result = 3.14 * radius * radius;
	return result;
}

int main()
{
	// �Լ��� ȣ���Ѵ�
	int n = add_number(10, 20); // 30;
	printf("n = %d\n", n);

	display_number(50);

	printf("pi : %.4f\n", get_pi());

	printf("%d\n", multyply(10, 5));

	printf("1���� %d������ �� : %d\n", 100, sum_numbers(100));

	float radius = 5.2;
	printf("������ %.2f�� ������ %.2f\n", radius, area(radius));

	return 0;
}