#include"myclass01.h"

myclass01::myclass01()
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			table[i][j] = rand() % 51 + 50;

	pMatrix = NULL;
}

myclass01::~myclass01() 
{
	for (int i = 0; i < row; i++)
	{
		free(pMatrix[i]);
	}
	free(pMatrix);
}

int myclass01::setMatrix(int _row, int _col)
{
	pMatrix = (int**)malloc(sizeof(int*) * _row);
	row = _row;
	col = _col;
	for (int i = 0; i < _row; i++)
	{
		pMatrix[i] = (int*)malloc(sizeof(int) * _col);
		for (int j = 0; j < _col; j++)
			pMatrix[i][j] = rand() % 51;
	}
	return 1;
}

int myclass01::displayTable()
{
	for (int i = 0; i < 5; i++)
	{
		cout << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << table[i][j] << " ";
		}
	}
	cout << endl;
	
	return 1;
}

int myclass01::displayMatrix()
{
	for (int i = 0; i < row; i++)
	{
		cout << endl;
		for (int j = 0; j < col; j++)
		{
			cout << *(*(pMatrix+i)+j) << " ";
		}
	}
	cout << endl;

	return 1;
}