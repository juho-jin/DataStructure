#include"MyLinkedList.h"

MyLinkedList::MyLinkedList() : head(NULL) {}
MyLinkedList::~MyLinkedList()
{
	TNODE* Dnode;
	
	while (1)
	{
		Dnode = head;
		head = Dnode->next;
		delete Dnode;
		if (head == NULL)
		{
			cout << "delet all data";
			return;
		}
	}
}

void MyLinkedList::addNode(int id, string name, int year, int month, int day)
{
	TNODE* node = new TNODE;
	TNODE* Enode;

	node->id = id;
	node->name = name;
	node->year = year;
	node->month = month;
	node->day = day;
	node->next = NULL;

	if (head == NULL)
	{
		head = node;
		return;
	}
	if (head != NULL)
	{
		Enode = head;
		while (Enode->next != NULL)
		{
			Enode = Enode->next;
		}
		Enode->next=node;
	}
}

void MyLinkedList::display()
{
	TNODE* display;
	display = head;
	while (display != NULL)
	{
		cout << display->id << " ";
		cout << display->name << " ";
		cout << display->year << " ";
		cout << display->month << " ";
		cout << display->day << " "<< endl;
		display = display->next;
	}
}

void MyLinkedList::insertNode(int Fid, int Aid, string name, int year, int month, int day)
{
	TNODE* node, Nnode;
	node = head;
	while (node->id!=Fid)
	{
		node = node->next;
		if (node->id == Fid)
		{
			TNODE* Nnode = new TNODE;
			Nnode->id = Aid;
			Nnode->name = name;
			Nnode->year = year;
			Nnode->month = month;
			Nnode->day = day;
			Nnode->next = node->next;
			node->next = Nnode;
		}
	}
}

void MyLinkedList::deleteNode(int _id)
{
	TNODE* Dnode;
	TNODE* PreNode;

	PreNode = head;
	Dnode = head->next;
	while (Dnode->id != _id)
	{
		PreNode = PreNode->next;
		Dnode = Dnode->next;
		if (Dnode->next == NULL)
		{
			cout << "Not this id" << _id << endl;
			return;
		}
	}
	cout << "Delete id :" << Dnode->id << endl;
	PreNode->next = Dnode->next;
	delete Dnode;

}

void MyLinkedList::seachNode(int _id)
{
	TNODE* Snode;
	Snode = head;

	while (1)
	{
		if (_id == Snode->id)
		{
			cout << "id : " << Snode->id << "Name : " << Snode->name << "Year : " << Snode->year << "Month : " << Snode->month << "Day :" << Snode->day << endl;
			return;
		}
		Snode = Snode->next;
		if (Snode->next == NULL)
		{
			cout << "Not this id" << _id << endl;
			return;
		}
	}

}

