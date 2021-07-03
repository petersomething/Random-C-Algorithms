#include <stdio.h>

void main()
{
	int num;
	int numtwo;

	printf("Enter Number A");
	scanf("%d", &num);

	printf("\nEnter Number B\n");
	scanf("%d", &numtwo);

	if((num%10)==(numtwo%10)) //quite an interesting way to find the last digit of any number
	{
		printf("Yes \n");
	}

	else
	{
		printf("No \n");
	}
}