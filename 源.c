#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int ch = 0;
	while((ch=getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}
	//int ret = 0;
	//int ch = 0;
	//char password[20] = { 0 };
	//printf("����������:>");
	//scanf("%s", password);
	//while ((ch = getchar()) !='\n')
	//{
	//	;
	//}
	//printf("��ȷ��(Y/N):");
	//ret = getchar();
	//if (ret == 'Y')
	//{
	//	printf("�ɹ�\n");
	//}
	//else
	//{
	//	printf("ʧ��\n");
	//}
	return 0;
}