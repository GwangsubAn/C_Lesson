
#define _CRT_SECURE_NO_WARNINGS   // scanf �Լ� ���� ����  
#include<stdio.h>

int main()
{
		// ����Լ�
	{
		//printf("Welcome \tC");
		//printf("\b\bc++\n"); 
		//printf("��⵵ \\ \r ������\n");  //\". \' 
		//printf("C:\\ags\\test");  //\". \' 

		int age = 10;  // 4
		char ch = 'K'; // 1
		short kor = 96; // 2
		float pi = 3.14f;  // 4 Byte  F: ���� ������
		double math = 42.195;

		// ���� ����
		//printf("���̴� %d�� �Դϴ�\n", age);
		//printf("������ %corea �Դϴ�\n", ch);
		//printf("�������� : %hd\n", kor);  // short�� ����
		//printf("PI : %f\n", pi);
		//printf("PI : %4.2f\n", pi);  // 4�ڸ� Ȯ�� �Ҽ��� 2�ڸ� ǥ��
		//printf("PI : %6.3f\n", math);  // 6�ڸ� Ȯ�� �Ҽ��� 3�ڸ� ǥ��
		//printf("PI : %6.1f\n", math);  // 6�ڸ� Ȯ�� �Ҽ��� 1�ڸ� ǥ��
		//printf("PI : %.3f\n", math);  // 6�ڸ� Ȯ�� �Ҽ��� 1�ڸ� ǥ��
		//printf("%5d\n", age);  //5�ڸ� Ȯ�� ��������
		//printf("%-5d\n", age);//5�ڸ� Ȯ�� ��������

		// 16���� 

		printf("10 = %X\n", age);  // 16����
		printf("���� %d%%\n", kor); // % ǥ�� ���


		// %s ���ڿ� ���
		printf("���̸��� %s �Դϴ�\n", "AGS");

		// %p : Ư�� ��ü�� �޸� �ּҸ� ����Ѵ�
		printf("ch�� �޸� �ּ� : %p\n", &ch);  //& �ּҿ�����, �����տ� �ܵ����� ����

		printf("���̸��� %s �̰� ���̴� %d", "ags", age);

		// ǥ�� �Է��Լ� : scanf	
		// Compiler : GCC, MSC,  


		printf("\n\n==============================================\n");
		printf("���̸� �Է��ϼ��� >>> ");
		scanf("%d",&age);

		printf("���̸��� %s �̰� ���̴� %d\n", "ags", age);

		float height;
		printf("����� Ű�� �Է� >>> ");
		scanf("%f", &height);
		printf("�Է¹��� Ű�� %.2Fcm�Դϴ�\n",height);

		scanf("%c", &ch);

		printf("���ĺ� �� ���� �Է� >>> ");
		scanf("%c", &ch);
		printf("�Է� ���� ���ڴ� %c\n",ch);
		
		// printf("�������� �Է� :  >>> ");
		// scanf("%hd", &kor);  // Short�� ���� type  --> hd���
		// printf("�Էµ����� %d��\n ",kor);

		short eng;
		short history;

		printf("����, ���� ���� ���� �Է� : ");
		scanf("%hd %hd %hd", &kor, &eng, &history);
		printf("����, ���� ���� ������ %hd %hd %hd�Դϴ�", kor, eng, history); 

		// printf("%hd%d%ld%lld%u")
		// hf: half decimal, d: decimal, ld:long decimal, lld:long long decimal



	}
	return 0;
}


