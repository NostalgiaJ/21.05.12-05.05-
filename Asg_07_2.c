#include <stdio.h>

int getSign(int integer);

int main()
{
	int integer, sum = 0;

	int i;
	for (i = 1; i < 11; i++)
	{
		printf(">> (%d) input val: ", i);
		scanf("%d", &integer);

		if(getSign(integer) > 0)
			sum += integer;
	}

	printf("¡æ sum of positive values: %d\n", sum);

	return 0;
}

int getSign(int integer)
{
	if (integer > 0)
		return 1;
	else
		return 0;
}