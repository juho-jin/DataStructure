#include <iostream>
#include "MyLinkedListq.h"

MyLinkedList::MyLinkedList() : head(nullptr)// ������
{}

MyLinkedList::~MyLinkedList()// �Ҹ���
{
	TNODE* tnode = head;		// ����Ʈ�� ��ȸ�ϱ� ���� �ӽú���
	while (1)
	{
		head = tnode->next;
		cout << "delete :" << tnode->id << endl;
		delete tnode;
		if (head == NULL) break;
		tnode = head;
	}
}

void MyLinkedList::addNode(int _id, string name, int y, int m, int d)
{
	TNODE* tnode = new TNODE;

	tnode->id = _id;
	tnode->name = name;
	tnode->year = y;
	tnode->month = m;
	tnode->day = d;
	tnode->next = NULL;

	addNode(tnode);
}

void MyLinkedList::addNode(TNODE* node)// Node�� ���� �ڿ� �߰��ϴ� �Լ�
{
	if (!head)	// head�� ���ٸ� node�� head�� ����
	{
		head = node;
		return;
	}

	TNODE* tnode = head;		// ����Ʈ�� ��ȸ�ϱ� ���� �ӽú���
	while (tnode->next != NULL)	tnode = tnode->next;
	tnode->next = node;
}

void MyLinkedList::insertNode(int iid, int _id, string name, int y, int m, int d)
{
	TNODE* tnode = new TNODE;

	tnode->id = _id;
	tnode->name = name;
	tnode->year = y;
	tnode->month = m;
	tnode->day = d;
	tnode->next = NULL;

	insertNode(iid, tnode);
}

void MyLinkedList::insertNode(int _id, TNODE* node)// id�� _id�� ��带 ã�Ƽ� �ڿ� node �� �����ϴ� �Լ�
{
	if (!head)	// head�� ���ٸ� node�� head�� ����
	{
		head = node;
		return;
	}

	TNODE* tnode = head;		// ����Ʈ�� ��ȸ�ϱ� ���� �ӽú���
	while (1)
	{
		if (tnode->id == _id)
		{
			node->next = tnode->next;
			tnode->next = node;
			return;
		}
		if (tnode->next == NULL)	break;
		tnode = tnode->next;
	}
	addNode(node);
}

void MyLinkedList::deleteNode(int _id)// id�� _id�� Node�� �����ϴ� �Լ�
{
	if (!head)	return;

	TNODE* pre = NULL;
	TNODE* tnode = head;		// ����Ʈ�� ��ȸ�ϱ� ���� �ӽú���
	while (1)
	{
		if (tnode->id == _id)
		{
			if (tnode == head)
				head = tnode->next;
			else
				pre->next = tnode->next;
			delete tnode;
			return;
		}
		pre = tnode;
		tnode = tnode->next;

		if (tnode == NULL)
			break;
	}
}

TNODE* MyLinkedList::searchNode(int _id)// id�� �̿��ؼ� Node�� ã�� �Լ�
{
	TNODE* tnode = head;		// ����Ʈ�� ��ȸ�ϱ� ���� �ӽú���
	while (1)
	{
		if (tnode->id == _id)
			return tnode;
		tnode = tnode->next;
		if (tnode == NULL)	break;
	}
	return nullptr;
}

void MyLinkedList::display()// ���� ����� LinkedList Node���� name, year, month, day�� ���
{
	TNODE* tnode = head;		// ����Ʈ�� ��ȸ�ϱ� ���� �ӽú���
	while (1)
	{
		cout << tnode->id << "," << tnode->name << "," << tnode->year << "-" << tnode->month << "-" << tnode->day << endl;

		tnode = tnode->next;
		if (tnode == NULL)	break;
	}
}
