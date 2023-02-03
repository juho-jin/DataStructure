#include<iostream>
using namespace std;

class A
{
private:
	int a;
protected:
	int b;
public:
	int c;
	void setA(int t) { a = t; }
	void setB(int t) { b = t; }
	int getA() { return a; }
	int getB() { return b; }

	void operator=(A& aa)
	{
		a = aa.a;
		b = aa.b;
		c = aa.c;
	}
};

//class B : protected A
class B : public A
{
private:
	int d;
protected:
	int e;
public:
	int f;
	void setD(int t) { d = t; }
	void setE(int t) { e = t; }
	int getD() { return d; }
	int getE() { return e; }

	void operator=(B& bb)
	{
		d = bb.d;
		e = bb.e;
		f = bb.f;

		setA(bb.getA());
		setB(bb.getB());
		c = bb.c;
	}

};

int main()
{
	A a;
	a.setA(10);
	a.setB(11);
	a.c = 12;

	B b;
	b.setD(20);
	b.setE(21);
	b.f = 22;

	A c;
	c = a;

	A d;
	d = b;

	A e;
	e = (A)b;

	return 1;
}