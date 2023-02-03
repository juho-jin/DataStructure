#include<stdio.h>
#include<limits.h>

int main(void)
{
	int temp;
	int array[10] = { 6,30,17,28,3,46,10,13,34,20 };

	for (int i = 0; i < 10; i++)
	{
		int minidx = -1;
		int min = INT_MAX;
		for (int j = i; j < 10; j++)
		{
			if (array[j] < min)
			{
				minidx = j;
				min = array[j];
			}
		}
		temp = array[i];
		array[i] = min;
		array[minidx] = temp;
	}
	
	return 0;
}