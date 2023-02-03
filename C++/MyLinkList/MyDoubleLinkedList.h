#pragma once
#ifndef MYDOUBLELINKEDLIST_H
#define	MYDOUBLELINKEDLIST_H

#include <iostream>

using namespace std;

typedef struct _dnode
{
	string name;
	int year, month, day;
	struct _dnode* prev;
	struct _dnode* next;

}DNODE;

class MyDoubleLinkedList
{
private:
	DNODE* head;
	void addNodeBack(DNODE* node);
	void addNodeFront(DNODE* node);
public:
	MyDoubleLinkedList();
	~MyDoubleLinkedList();
	void addNode(string name, int year, int month, int day);
	void insertNode(string _name, string name, int year, int month, int day);
	void deleteNode(DNODE* _node);
	void seachNode(string name, int year, int month, int day);
	void displayForward();
	void displayBackward();
};

#endif // !MYDOUBLELINKEDLIST_H

