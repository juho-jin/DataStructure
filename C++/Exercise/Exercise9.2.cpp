#include <iostream>

using namespace std;

class Printer
{
public:
	Printer() {}
	virtual void Method(char* buffer) = 0;
	virtual int Cpi() = 0;
};

class LaserPrinter : public Printer
{
public:
	LaserPrinter() {}
	int Cpi()
	{
		return 300;
	}

};

class InkJetLaser : public LaserPrinter
{
public:
	InkJetLaser() {}
	void Method(char* buffer) {}
};

void main()
{
	//Printer p1;
	//Printer* p2 = new Printer();
	Printer* p3;
	//Printer* p4 = new LaserPrinter();
	Printer* p5 = new InkJetLaser();

	//LaserPrinter * 1p2 = new Printer();
	//LaserPrinter * 1p3 = new LaserPrinter();
	//LaserPrinter * 1p4;

	InkJetLaser ip1;
	InkJetLaser& ip2 = ip1;
	//InkJetLaser* ip3 = new Printer();
	//InkJetLaser* ip4 = new LaserPrinter();
	InkJetLaser* ip5 = new InkJetLaser();
	InkJetLaser* ip6 = new InkJetLaser();
	Printer* p6 = (Printer*)ip6;
}