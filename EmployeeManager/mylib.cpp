#include"myheader.h"

void show_main_menu()
{
	system("cls");  //콘솔화면을 클리어
	printf("=======================");
	printf("1. 사원 정보 입력\n");
	printf("2. 사원 정보 출력\n");
	printf("3. 사원 정보 수정\n");
	printf("4. 사원 정보 삭제\n");
	printf("=======================");
	printf("5. 부서 정보 입력\n");
	printf("6. 부서 정보 출력\n");
	printf("7. 부서사원 정보 수정\n");
	printf("8. 부서 정보 삭제\n");
	printf("=======================");
	printf("a. 직급 정보 입력\n");
	printf("b. 직급 정보 출력\n");
	printf("c. 직급 정보 수정\n");
	printf("d. 직급 정보 삭제\n");
	printf("=======================");
	printf("x. 프로그램 종료\n");
	printf("=======================");	
}
int input_menu()
{
	printf("메뉴를 선택하세요>>>");
	return _getch();
}

UINT insert_part(PART** ppParts, UINT size)// 부서정보 입력 함수
{
	if (!ppParts == NULL)
	{
		return 0;
	}

	system("cls");

	// Array
	PART* pParts = *ppParts;

	PART part = { 0 };
	
	printf("부서코드를 입력하세요>>> ");
	scanf("%u", &part.id);

	printf("부서명을 입력하세요>>> ");
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
UINT print_part(PART* pPart, UINT size) // 부서정보 출력 함수
{
	//for문으로 출력
	return 0;

}