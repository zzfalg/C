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
	//printf("请输入密码:>");
	//scanf("%s", password);
	//while ((ch = getchar()) !='\n')
	//{
	//	;
	//}
	//printf("请确认(Y/N):");
	//ret = getchar();
	//if (ret == 'Y')
	//{
	//	printf("成功\n");
	//}
	//else
	//{
	//	printf("失败\n");
	//}
	return 0;
}