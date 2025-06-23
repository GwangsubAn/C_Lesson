#include"mylib.h"

int main()
{
	srand((unsigned int)time(NULL));

	// 로또 당첨번호 (6개) 1차원 배열 생성 후 정렬
	int wins[COL] = { 0 }; // 당첨번호 저장 배열
	random_value(wins, COL, 45);  // ㄷ
	my_qsort(wins, 0, COL - 1);

	// 당첨번호 출력
	printf("-------- 로또  당첨  번호 --------\n");
	print_array(wins, COL);
	printf("\n");


	// 사용자 로또 번호 생성 후 맞은 갯수 출력
	int lotto[ROW][COL] = { 0 };  //사용자 로또 번호(5 x 6) 저장 배열

	//lotto[i] 배열에서 당첨갯수 카운트하여 출력
	printf("-------- 사용자 로또 번호 --------\n");
	for (int i = 0; i < ROW; i++)
	{
		int count = 0;
		random_value(lotto[i], COL, 45);
		my_qsort(lotto[i], 0, COL - 1);

		for (int j = 0; j < COL; j++)
		{
			//if (find_value(lotto[i], COL, wins[j]) >= 0)
			if (find_value(wins, COL, lotto[i][j]) >= 0)
			{
				count++;
			}
		}
		print_array(lotto[i], COL);
		printf(": %d개 일치\n", count);
	}
	return 0;
}