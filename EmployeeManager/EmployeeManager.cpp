#include "mylib.h"     


int main()
{

	PART* pParts = NULL; // 부서정보들을 저장하는 배열(가변)
	UINT nParts = 0; //부서배열에 저장된 아이템들의 갯수

	PART* pRanks = NULL; // 부서정보들을 저장하는 배열(가변)
	UINT nRanks = 0; //부서배열에 저장된 아이템들의 갯수

	PART* pEmps = NULL; // 부서정보들을 저장하는 배열(가변)
	UINT nEmps = 0; //부서배열에 저장된 아이템들의 갯수
	int menu = 0;
	do
	{
		show_main_menu();
		menu = input_menu();
		switch (menu)
		{
		case '5':
			insert_part(&pParts, nParts);
			print_part(pParts, nParts);
			break;
		case 'x':
		case 'X':
			goto RELEASE_AREA;

		}

		printf("--------------------------------\n");
		printf("계속하려면 아무키나 입력하세요 : ");
		_getch();


	} while (1);

RELEASE_AREA:


	FREE(pParts);
	FREE(pRanks);
	FREE(pEmps);


	return 0;
}
