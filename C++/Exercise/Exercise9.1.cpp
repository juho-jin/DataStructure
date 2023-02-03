#include <iostream>
using namespace std;

class BaceClass
{
public:
	BaceClass() { cout << "Base class ������ ȣ��" << endl; }
	//virtual ~BaceClass()
	virtual ~BaceClass() { cout << "Base class �Ҹ��� ȣ��" << endl; }
};

class Derived : public BaceClass
{
public:
	Derived() 
	{
		cout << "Derived class ������ ȣ��" << endl;
	}

	~Derived()
	{
		cout << "Derived class �Ҹ��� ȣ��" << endl;
	}
};

class ReDerived : public Derived
{
public:
	ReDerived()
	{
		cout << "ReDerived class ������ ȣ��" << endl;
	}

	~ReDerived()
	{
		cout << "ReDerived class �Ҹ��� ȣ��" << endl;
	}
};

void main()
{
	BaceClass* b;
	b = new Derived;
	Derived* pder;
	pder = new ReDerived;
	b = pder;
	delete pder;
	delete b;
}