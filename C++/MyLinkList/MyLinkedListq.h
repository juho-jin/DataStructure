#ifndef _MYLINKEDLISTQ_H_
#define _MYLINKEDLISTQ_H_
#include <string>

using namespace std;

typedef struct _tnode {
    int id;
    string name;
    int year, month, day;
    struct _tnode* next;
} TNODE;
class MyLinkedList
{
    TNODE* head;			                // ���� ����Ʈ�� ������(�ʱ�� NULL)
public:
    MyLinkedList();                         // ������
    ~MyLinkedList();                        // �Ҹ���

    void addNode(int _id, string name, int y, int m, int d);
    void insertNode(int iid, int _id, string name, int y, int m, int d);

    TNODE* searchNode(int _id);		        // id�� �̿��ؼ� Node�� ã�� �Լ�
    void display();			                // ���� ����� LinkedList Node���� name, year, month, day�� ���
    void deleteNode(int _id);		        // id�� _id�� Node�� �����ϴ� �Լ�

private:
    void addNode(TNODE* node);	            // Node�� ���� �ڿ� �߰��ϴ� �Լ�
    void insertNode(int _id, TNODE* node);	// id�� _id�� ��带 ã�Ƽ� �ڿ� node �� �����ϴ� �Լ�
};

#endif