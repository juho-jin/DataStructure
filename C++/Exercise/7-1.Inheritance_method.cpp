#include<iostream>
using namespace std;

class A
{
private:
	int a_private;
protected:
	int a_protected;
public:
	int a_public;

	void SetData()
	{
		a_private = 1;
		a_protected = 2;
		a_public = 3;
	}

	void ModifyData(int a, int b, int c)
	{
		a_private = a;
		a_protected = b;
		a_public = c;
	}
};

class B : public A
{
public :
	void SetData()
	{
		a_private = 11;
		a_protected = 22;
		a_public = 33;
	}
};

class C : protected A
{
public:
	void SetData()
	{
		a_private = 211;
		a_protected = 222;
		a_public = 233;
	}
};

class D : private A
{
public:
	void SetData()
	{
		a_private = 311;
		a_protected = 322;
		a_public = 333;
	}

	void callModifyData()
	{
		A::ModifyData(11, 22, 33);
	}
};

int main()
{
	A a;
	a.a_public = 2;
	cout << "a_public=" << a.a_public << endl;
	a.a_private = 41;
	//a.a_private = 42;
	a.SetData();
	cout << "a_public=" << a.a_public << endl;

	B b;
	b.a_public = 4;
	cout << "a_public=" << b.a_public << endl;
	b.SetData();
	cout << "a_public=" << b.a_public << endl;
	b.a_private = 51;
	b.a_protected = 52;

	C c;
	c.a_public = 5;
	cout << "a_public=" << c.a_public << enld;
	c.SetData();
	cout << "a_public=" << c.a_public << enld;
	c.a_private = 61;
	c.a_protected = 62;

	D d;
	d.a_public = 6;
	cout << "a_public" << d.a_public << endl;
	d.SetData();
	cout << "a_public" << d.a_public << endl;
	d.a_private = 71;
	d.a_protected = 72;
	d.callModifyData();

}

