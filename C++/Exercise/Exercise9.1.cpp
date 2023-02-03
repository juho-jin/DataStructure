#include <iostream>
using namespace std;

class BaceClass
{
public:
	BaceClass() { cout << "Base class 생성자 호출" << endl; }
	//virtual ~BaceClass()
	virtual ~BaceClass() { cout << "Base class 소멸자 호출" << endl; }
};

class Derived : public BaceClass
{
public:
	Derived() 
	{
		cout << "Derived class 생성자 호출" << endl;
	}

	~Derived()
	{
		cout << "Derived class 소멸자 호출" << endl;
	}
};

class ReDerived : public Derived
{
public:
	ReDerived()
	{
		cout << "ReDerived class 생성자 호출" << endl;
	}

	~ReDerived()
	{
		cout << "ReDerived class 소멸자 호출" << endl;
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