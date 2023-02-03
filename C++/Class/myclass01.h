#pragma once//컴파일 할 때 한번만 실시 
#ifndef MYCLASS01_H//#ifndef-> 중복 컴파일 하지 않기 위하여 
#define MYCLASS01_H//위에 적은 다음 아래에도 작성
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>

using namespace std;

class myclass01
{
private://아무것도 적지 않았을 때 Defort값
	int table[5][5];
	int** pMatrix;
	int row;
	int col;
public:
	myclass01();
	~myclass01();// 생성자 - 소멸자는 같이 바로 작성해줄 것
	int setMatrix(int row, int col);
	int displayTable();
	int displayMatrix();

};
#endif//#ifndef의 종결
