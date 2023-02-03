#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "myclass01.h"

using namespace std;

int main(void)
{
	myclass01 A;
	A.displayTable();
	A.setMatrix(5, 10);
	A.displayMatrix();

	system("pause");
}