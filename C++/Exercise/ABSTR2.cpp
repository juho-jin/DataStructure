#include <iostream>

using namespace std;

class Printer
{
public:
	Printer() {}
	virtual void Method(char* buffer) = 0;
	virtual int Dpi() = 0;
};
class DotMatrixPrinter : public Printer
{
	int nDots;
public:
	DotMatrixPrinter(int n) : nDots(n) {}//nDots(n)=={nDot=n;}
	void Method(char* buffer)
	{
		sprintf(buffer, "Dot matrix printer with %d pins", nDots);
	}
	int Dpi()
	{
		switch (nDots)
		{ 
			case 8: return 150;
			case 9: return 160;
			case 24: return 300;
			default: return 100;
		}
	}
};

void main()
{
	char description[40];//1차원에서 배열과 포인터는 거의 유사하다고 보면 됨 2차원에서는 다름

	DotMatrixPrinter dmp(24);
	dmp.Method(description);
	cout << description << endl << "DPI : " << dmp.Dpi() << endl << endl;
	//DotMatrixPrinter pr(9); 아래의 포인터 형식이 아닌 stack 형식으로 객체를 생성할때 사용하는 방법
	Printer* pPri;
	pPri = new DotMatrixPrinter(9);
	pPri->Method(description);
	cout << description << endl << "DPI : " << pPri->Dpi() << endl << endl;
	delete pPri;
	system("pause");
}
