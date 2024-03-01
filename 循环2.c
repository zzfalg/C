//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		
//	}
//	return 0;
//}
#include  <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	/*int ch = getchar();
	putchar(ch);
	printf("%c\n", ch);*/
	return 0;
}