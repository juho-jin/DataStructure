#include"MyLinkedList.h"

int main()
{
	{
		MyLinkedList L;
		L.addNode(0, "John", 2000, 1, 1);
		L.addNode(1, "Mike", 2010, 10, 10);
		L.addNode(2, "Tom", 2011, 10, 11);
		L.addNode(3, "Jake", 2012, 10, 12);
		L.addNode(4, "Lee", 2013, 10, 13);

		L.display();
		cout << endl;

		L.insertNode(1, 10, "Kim", 2010, 9, 1);

		L.display();
		cout << endl;

		L.seachNode(2);
		cout << endl;

		L.deleteNode(3);
		cout << endl;

		L.display();
		cout << endl;

		L.seachNode(6);
		cout << endl;

		L.deleteNode(11);
		cout << endl;

		L.~MyLinkedList();
	}
}
