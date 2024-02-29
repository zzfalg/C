#include <stdio.h>
int main()
{
	int i = 1;
	while (i <= 100)
	{
		i++;
		if (i == 5)
			continue;
		printf("%d ", i);
		
	}
	return 0;
}