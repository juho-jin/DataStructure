#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	FILE* fp;
	int grade[100][3];
	int i, a, b, c;

	for (i = 1; i <= 100; i++);
	{
		
		a = rand() % 51 + 50;
		b = rand() % 51 + 50;
		c = rand() % 51 + 50;

		printf("±¹ %d ¿µ %d ¼ö %d\n", a, b, c);
	}
	

}