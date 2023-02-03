#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int** mat;
	int size, a, b;
	scanf("%d", &size);
	// malloc 메모리 동적 할당 함수
	mat = (int**)malloc(size * sizeof(int*));
	for (int i = 0; i < size; i++) 
	{
		mat[i] = (int*)malloc(size * sizeof(int));
	}	
	int cnt = 1;
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++) 
			mat[a][b] = cnt++;
	}
	free(mat);
}