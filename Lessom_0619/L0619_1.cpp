#include 


int main()
{
	char sz[] = "Hello"; // {'H',''}

	char sz[30] = { 0 };
	// scanf();

	fgets(sz,30,stdin);

	// �迭�� ���� : 6
	printf("�迭�� ����: %u\n",sizeof(sz));

	// ���ڿ��� ���� : 5 
	printf("���ڿ��� ����: %u\n", strlen(sz));

	printf("%s\n",sz);

	//

	const char* psz = "Hello";
	printf("%s\n", sz);

	psz = "SBS Academy";  // �����
	printf("%s\n", sz);

	printf("���ڿ��� ����:%u\n", my_strlen(psz));


	return 0;
}