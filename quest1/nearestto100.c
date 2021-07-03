#include <stdio.h>

void main()
{
	int num;
	int numtwo;

	printf("Enter Number A");
	scanf("%d", &num);

	printf("\nEnter Number B\n");
	scanf("%d", &numtwo);

	if((100-num)>(100-numtwo))
	{
		printf("Number Closest to 100 %d \n", numtwo);
	}

	if((100-numtwo)>(100-num))
	{
		printf("Number Closest to 100 %d \n", num);
	}

	else
	{
		printf("0 \n");
	}
}