#include "MyDoubleLinkedList.h"

int main()
{
	MyDoubleLinkedList N;
	N.addNode("John", 2000, 1, 1);
	N.addNode("Mike", 2010, 10, 10);
	N.addNode("Tom", 2011, 10, 11);
	N.addNode("Jake", 2012, 10, 12);
	N.addNode("Lee", 2013, 10, 13);

	N.displayForward();
	cout << endl;

	N.insertNode("John", "Karl", 2020, 12, 31);

	N.displayForward();
	cout << endl;
}