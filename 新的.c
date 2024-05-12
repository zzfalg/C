#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	double sum = 0.0;
	int flage = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flage* 1.0 / i;
		flage = -flage;
	}
	printf("%lf\n", sum);
	return 0;
}




//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{/*
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//		printf("\ncount = %d\n", count);
//	return 0;
//}


//{
//	int m = 24;
//	int n = 18;
//	int i = 0;
//	scanf("%d%d", &m, &n);
//	while (i = m % n)
//	{
//		//i = m % n;
//		m = n;
//		n = i;
//	}
//	printf("%d\n",n);
//	return 0;
//}





//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}