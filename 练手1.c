#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int abc = 1;
	
	scanf("%d",&n);
	for (i = 1; i <=n; i++)
	{
		abc = abc * i;
	}
	printf("abc=%d\n", abc);
	/*int i = 1;
	do
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	}
	while (i <= 10);*/
	/*int i = 0;
	for (i = 0; i < 10; i++)
	{
		int j = 0;
		for (j = 0; j < 10; j++)
		{
			printf("xixi\n");
		}
	}*/
	return 0;
}