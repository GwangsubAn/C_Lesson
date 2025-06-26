#include "mylib.h"

// 6�� 26��(��) : Disk�� ���� �� Load ���

typedef unsigned int UINT;
typedef struct
{
	UINT id;
	char email[20];
	char pw[10];
	UINT age;
} USER;

// ��������
int g_age;

void save_user(USER* pUser)
{
	if (!pUser) return;
	// File Open Mode: ���� ���ٹ�� 
	// Write Mode (w): ���� 
	// Read Mode: �б�
	// Append Mode : �߰� 

	// Text Mode (t)
	// Binary Mode (b)

	FILE* fd = fopen("user.dat", "wb"); //�Լ��� ù���� �Ű����� ���� : const char* : ���ڿ��ǹ�  
	if (fd == NULL)  //!fd
	{
		printf("���� ���� ����\n");
		return;
	}

	// ���Ͽ� pUser�� ���� ���� �õ� : ������ ������ ���� ��ȯ(���� ������ Element Count�� 1, 
	size_t res = fwrite(pUser, sizeof(USER), 1, fd);  // ��ȯ�� (element Count��

	if (res != 1)
	{
		printf("���� ����\n");
	}
	fclose(fd);
}
void load_user(USER* pUser)
{
	if (!pUser) return;

	FILE* fd = fopen("user.dat", "rb"); //�Լ��� ù���� �Ű����� ���� : const char* : ���ڿ��ǹ�  
	if (fd == NULL)  //!fd
	{
		printf("���� ���� ����\n");
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
		printf("���� ���� ����\n");
		return;
	}

	// fputs(text, fd);
	size_t len = strlen(text);
	fwrite(text, sizeof(char), len, fd);
	fclose(fd);
}
void load_text()
{
	// �޸� ���� : 
	// Stack : �����������  (OS�� ���� �� ȸ��)
	// Code :��ɾ���� �����ϴ� ���� (OS�� ���� �� ȸ��)
	// Data(Static) : Static ����/ �������� (OS�� ���� �� ȸ��)
	// Heap : (�����ڰ� ����)

	int num = 10;  // ��������
	static int my_st = 10;  //static :���α׷� ������ �Ҵ��� �޾� ���α׷��� ����� ����
	FILE* fd = fopen("mytext.txt", "rt");
	if (fd == NULL)  //!fd
	{
		printf("���� ���� ����\n");
		return;
	}

	fseek(fd, 0, SEEK_END);  //������ ���� ������ ��ġ�� �̵�
	long size = ftell(fd);   //������ Size
	fseek(fd, 0, SEEK_SET);  //������ ó����ġ�� �̵�

	// printf("%d Bytes\n", size);
	// Heap�� �޸𸮸� �Ҵ��ϴ� ���

	char* text = (char*)malloc(size);
	if (text)  //�޸� �Ҵ� ������ 
	{
		memset(text, 0, size); // �޸� û��
		fread(text, sizeof(char), size, fd);
		printf("%s\n", text);
		free(text);  //Heap�� �Ҵ���� �޸� ��ȯ
	}

	fclose(fd);
	// ������ : BOF,EOF,CURSOR

	/*printf("%d\t", ++my_st);
	printf("%d\n", ++num);*/

}


int main()
{
	USER user = { 0 };  //�ʱ�ȭ (���ڿ��� �Է¹ް��� �ҋ� �ʱ�ȭ ���ִ� ���� ����)

	//user.id = 1;
	//printf("email�� �Է��ϼ���: ");
	//scanf("%s", user.email);

	//printf("��й�ȣ�� �Է��ϼ���: ");
	//scanf("%s", user.pw);

	//printf("���̸� �Է��ϼ���: ");
	//scanf("%d", &user.age);

	////���Ͽ� ����
	//save_user(&user);
	load_user(&user);

	printf("id: %u\n", user.id);
	printf("�̸���: %s\n", user.email);
	printf("��й�ȣ: %s\n", user.pw);
	printf("����: %u\n", user.age);

	/*const char* text = "Hello\n�ȳ��ϼ���\nNice to Meet You\n";
	save_text(text);*/
	load_text();

	return 0;
}