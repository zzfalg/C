#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int abc = 1;
	int sum = 0;
	for(n=1;n<=10;n++)
	{
		abc = abc * n;
		sum = sum + abc;
	}
	printf("sum=%d\n", sum);
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