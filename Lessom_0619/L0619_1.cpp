#include 


int main()
{
	char sz[] = "Hello"; // {'H',''}

	char sz[30] = { 0 };
	// scanf();

	fgets(sz,30,stdin);

	// 배열의 길이 : 6
	printf("배열의 길이: %u\n",sizeof(sz));

	// 문자열의 길이 : 5 
	printf("문자열의 길이: %u\n", strlen(sz));

	printf("%s\n",sz);

	//

	const char* psz = "Hello";
	printf("%s\n", sz);

	psz = "SBS Academy";  // 상수값
	printf("%s\n", sz);

	printf("문자열의 길이:%u\n", my_strlen(psz));


	return 0;
}