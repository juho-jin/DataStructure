#pragma once//������ �� �� �ѹ��� �ǽ� 
#ifndef MYCLASS01_H//#ifndef-> �ߺ� ������ ���� �ʱ� ���Ͽ� 
#define MYCLASS01_H//���� ���� ���� �Ʒ����� �ۼ�
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>

using namespace std;

class myclass01
{
private://�ƹ��͵� ���� �ʾ��� �� Defort��
	int table[5][5];
	int** pMatrix;
	int row;
	int col;
public:
	myclass01();
	~myclass01();// ������ - �Ҹ��ڴ� ���� �ٷ� �ۼ����� ��
	int setMatrix(int row, int col);
	int displayTable();
	int displayMatrix();

};
#endif//#ifndef�� ����
