#include <stdio.h>

int getSum(int integer);

int main()
{
	int integer;
	int sum;

	printf(">> enter value: ");
	scanf("%d", &integer);

	sum = getSum(integer);
	printf("¡æ sum(%d) ---> %d\n", integer, sum);

	return 0;
}

int getSum(int integer)
{
	int i, sum = 0;

	if (integer >= 0)
		for (i = integer; i > 0; i--)
			sum += i;
	else
		for (i = integer; i < 0; i++)
			sum += i;		
	
	return sum;
}