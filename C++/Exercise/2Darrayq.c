#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int **arr;
	int num;
	num = 0;

	scanf("%d", &num);
	
	arr = (int**)malloc(sizeof(int*) * num);//�迭 ����
	for (int i = 0; i < num; i++)
		arr[i] = (int*)malloc(sizeof(int) * num);
	int cnt = 1;//�����ͼ���
	for (int i = 0; i < num; i++)
		for (int j = 0; j < num; j++)
			arr[i][j] = cnt++;
		

	for (int i = 0; i < num; i++)//���
	{
		for (int j = 0; j < num; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	}

	for (int i = 0; i < num; i++)//�޸� ����
		free(arr[i]);
	free(arr);
}

	
