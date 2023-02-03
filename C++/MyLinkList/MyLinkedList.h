#pragma once
#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H
#include <iostream>

using namespace std;

typedef struct _tnode
{
	int id;
	int year, month, day;
	string name;
	_tnode* next;
}TNODE;

class MyLinkedList
{
private:
	TNODE* head;
public:
	MyLinkedList();
	~MyLinkedList();
	void addNode(int id, string name, int year, int month, int day);
	void insertNode(int Fid, int Aid, string name, int year, int month, int day);
	void deleteNode(int _id);
	void seachNode(int _id);
	void display();

};
#endif // !MYLINKEDLIST_H

