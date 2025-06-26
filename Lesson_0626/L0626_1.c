#include "mylib.h"

// 6월 26일(목) : Disk에 저장 및 Load 명령

typedef unsigned int UINT;
typedef struct
{
	UINT id;
	char email[20];
	char pw[10];
	UINT age;
} USER;

// 전역변수
int g_age;

void save_user(USER* pUser)
{
	if (!pUser) return;
	// File Open Mode: 파일 접근방법 
	// Write Mode (w): 쓰기 
	// Read Mode: 읽기
	// Append Mode : 추가 

	// Text Mode (t)
	// Binary Mode (b)

	FILE* fd = fopen("user.dat", "wb"); //함수의 첫번쨰 매개변수 원형 : const char* : 문자열의미  
	if (fd == NULL)  //!fd
	{
		printf("파일 열기 실패\n");
		return;
	}

	// 파일에 pUser의 내용 저장 시도 : 저장할 단위의 갯수 반환(저장 성공시 Element Count값 1, 
	size_t res = fwrite(pUser, sizeof(USER), 1, fd);  // 반환값 (element Count값

	if (res != 1)
	{
		printf("저장 실패\n");
	}
	fclose(fd);
}
void load_user(USER* pUser)
{
	if (!pUser) return;

	FILE* fd = fopen("user.dat", "rb"); //함수의 첫번쨰 매개변수 원형 : const char* : 문자열의미  
	if (fd == NULL)  //!fd
	{
		printf("파일 열기 실패\n");
		return;
	}

	fread(pUser, sizeof(USER), 1, fd);


	fclose(fd);
}
void save_text(const char* text)
{
	FILE* fd = fopen("mytext.txt", "wt");

	if (fd == NULL)  //!fd
	{
		printf("파일 열기 실패\n");
		return;
	}

	// fputs(text, fd);
	size_t len = strlen(text);
	fwrite(text, sizeof(char), len, fd);
	fclose(fd);
}
void load_text()
{
	// 메모리 공간 : 
	// Stack : 모든지역변수  (OS가 관리 및 회수)
	// Code :명령어들이 존재하는 공간 (OS가 관리 및 회수)
	// Data(Static) : Static 변수/ 전역변수 (OS가 관리 및 회수)
	// Heap : (개발자가 관리)

	int num = 10;  // 지역변수
	static int my_st = 10;  //static :프로그램 시작이 할당을 받아 프로그램이 종료시 해제
	FILE* fd = fopen("mytext.txt", "rt");
	if (fd == NULL)  //!fd
	{
		printf("파일 열기 실패\n");
		return;
	}

	fseek(fd, 0, SEEK_END);  //파일의 가장 마짐막 위치로 이동
	long size = ftell(fd);   //파일의 Size
	fseek(fd, 0, SEEK_SET);  //파일의 처음위치로 이동

	// printf("%d Bytes\n", size);
	// Heap에 메모리를 할당하는 방법

	char* text = (char*)malloc(size);
	if (text)  //메모리 할당 받으면 
	{
		memset(text, 0, size); // 메모리 청소
		fread(text, sizeof(char), size, fd);
		printf("%s\n", text);
		free(text);  //Heap에 할당받은 메모리 반환
	}

	fclose(fd);
	// 기준점 : BOF,EOF,CURSOR

	/*printf("%d\t", ++my_st);
	printf("%d\n", ++num);*/

}


int main()
{
	USER user = { 0 };  //초기화 (문자열을 입력받고자 할떄 초기화 해주는 것이 좋음)

	//user.id = 1;
	//printf("email을 입력하세요: ");
	//scanf("%s", user.email);

	//printf("비밀번호를 입력하세요: ");
	//scanf("%s", user.pw);

	//printf("나이를 입력하세요: ");
	//scanf("%d", &user.age);

	////파일에 저장
	//save_user(&user);
	load_user(&user);

	printf("id: %u\n", user.id);
	printf("이메일: %s\n", user.email);
	printf("비밀번호: %s\n", user.pw);
	printf("나이: %u\n", user.age);

	/*const char* text = "Hello\n안녕하세요\nNice to Meet You\n";
	save_text(text);*/
	load_text();

	return 0;
}