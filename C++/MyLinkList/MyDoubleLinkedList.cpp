#include "MyDoubleLinkedList.h"

MyDoubleLinkedList::MyDoubleLinkedList() : head(NULL) {}
MyDoubleLinkedList::~MyDoubleLinkedList()
{
	DNODE* Dnode = head;
	while (head != NULL)
	{
		head = Dnode->next;
		delete Dnode;
		Dnode = head;
	}
	
}

void MyDoubleLinkedList::addNode(string name, int year, int month, int day)
{
	DNODE* Fnode=new DNODE;

	Fnode->name = name;
	Fnode->year = year;
	Fnode->month = month;
	Fnode->day = day;
	Fnode->prev = NULL;
	Fnode->next = NULL;

	addNodeBack(Fnode);
}

void MyDoubleLinkedList::addNodeBack(DNODE* node)
{
	DNODE* _node;

	if (head == NULL)
	{
		//node->prev = head;
		head = node;

		return;
	}
	//if (head != NULL)
	//{
		_node = head;
		while (_node->next != NULL)
		{
			_node = _node->next;
		}
		_node->next = node;
		node->prev = _node;


	//}
}

//void MyDoubleLinkedList::addNodeFront(DNODE* node)
//{
//	DNODE* _node;
//
//}

void MyDoubleLinkedList::insertNode(string _name,string name,int year, int month, int day)
{
	DNODE* Setnode;
	DNODE* Newnode = new DNODE;
	Setnode = head;
	while (1)
	{
		if (Setnode->name == _name)
		{
			Newnode->name = name;
			Newnode->year = year;
			Newnode->month = month;
			Newnode->day = day;
			Newnode->prev = Setnode;
			Newnode->next = Setnode->next;
			Setnode->next = Newnode;
			break;
		}
		if (Setnode->next == NULL)
		{
			cout << "Not find written name" << endl;
			return;
		}
		Setnode = Setnode->next;
	}
	if (Newnode->next == NULL)
		return;
	Setnode = Newnode->next;
	Setnode->prev = Newnode;
	Newnode->next = Setnode;
}

void MyDoubleLinkedList::displayForward()
{
	DNODE* Pnode;

	Pnode = head;

	while (Pnode != NULL)
	{
		cout << Pnode->name << " ";
		cout << Pnode->year << " ";
		cout << Pnode->month << " ";
		cout << Pnode->day << " ";
		cout << endl;
		Pnode = Pnode->next;
	}
	return;
}