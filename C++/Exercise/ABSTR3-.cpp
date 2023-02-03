#include <iostream>
using namespace std;

class Printer
{
private:
	int a;
public:
	Printer() {}
	virtual void Method(char* buffer) = 0;
	virtual int Cpi() = 0;
	void D() 
	{
		cout << "Prnter_D()" << endl;
	}
};

class LaserPrinter : public Printer
{
private:
	int cpi;
public:
	LaserPrinter()
	{
		cpi = 20;
		//a = 2;
	}
	//int Cpi()
	//{
	//	cout << "LaserPrinter Cpi() : " << cpi << endl;
	//	return cpi;
	//}
	void Method(char* buffer)
	{
		cout << "LaserPrinter Method() : " << buffer << endl;
	}
	void D()
	{
		cout << "LaserPrinter_D()" << endl;
	}
};

class InkJetLaser : public LaserPrinter
{
private:
	int cpi;
public:
	InkJetLaser()//<=: cpi(30) {}
	{
		cpi = 30;
	}
	int Cpi()
	{
		cout << "InkJetLaser Cpi() : " << cpi << endl;
		return cpi;
	}
	void Method(char* buffer)
	{
		cout << "InkJetLaser Method() : " << buffer << endl;
	}
	void D()
	{
		cout << "InkJetLaser_D()" << endl;
	}
};

class FaxPrinter : public InkJetLaser
{
private:
	int cpi;
public:
	FaxPrinter() : cpi(40) {}
	int Cpi()
};