#include"myheader.h"

void show_main_menu()
{
	system("cls");  //�ܼ�ȭ���� Ŭ����
	printf("=======================");
	printf("1. ��� ���� �Է�\n");
	printf("2. ��� ���� ���\n");
	printf("3. ��� ���� ����\n");
	printf("4. ��� ���� ����\n");
	printf("=======================");
	printf("5. �μ� ���� �Է�\n");
	printf("6. �μ� ���� ���\n");
	printf("7. �μ���� ���� ����\n");
	printf("8. �μ� ���� ����\n");
	printf("=======================");
	printf("a. ���� ���� �Է�\n");
	printf("b. ���� ���� ���\n");
	printf("c. ���� ���� ����\n");
	printf("d. ���� ���� ����\n");
	printf("=======================");
	printf("x. ���α׷� ����\n");
	printf("=======================");	
}
int input_menu()
{
	printf("�޴��� �����ϼ���>>>");
	return _getch();
}

UINT insert_part(PART** ppParts, UINT size)// �μ����� �Է� �Լ�
{
	if (!ppParts == NULL)
	{
		return 0;
	}

	system("cls");

	// Array
	PART* pParts = *ppParts;

	PART part = { 0 };
	
	printf("�μ��ڵ带 �Է��ϼ���>>> ");
	scanf("%u", &part.id);

	printf("�μ����� �Է��ϼ���>>> ");
	scanf("%s", part.name);

	size_t new_size, old_size;
	old_size = size * sizeof(PART);
	new_size = old_size +sizeof(PART);

	PART* pNewParts = (PART*)malloc(new_size);
	if (pNewParts == NULL)
		return 0;
	if (pOldParts)
	{

		memcpy(pNewParts, pOldParts, old_size);
	}

	memcpy(pNewParts+old_size, &part, sizeof(PART));
	*ppParts = pNewParts;

	UINT count = new_size / sizeof(PART);
	
	return 0;

}
UINT print_part(PART* pPart, UINT size) // �μ����� ��� �Լ�
{
	//for������ ���
	return 0;

}