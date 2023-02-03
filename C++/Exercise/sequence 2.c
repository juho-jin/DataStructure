#include<stdio.h>

int main(void)
{
	int num, a, b;
	b = 0;
	
	printf("Please, enter a number between 5 and 20.\n");
	scanf("%d", &num);
	if (num > 5 || 20 > num)
	{
		for (a = 0; a < num; a++)
		{
			b = b + (b+1);
		}
		printf("Fibonacci sequence : %d, %d\n", num, a);
	}

	else if (num < 5 || 20 < num)
	{
		printf("Wrong. Please enter a number between 5 and 20.\n");

		return ;
	}
}