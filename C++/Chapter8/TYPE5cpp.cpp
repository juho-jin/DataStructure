#include <iostream>
using namespace std;

class TwoChars
{
protected:
	char first;
	char second;
public:
	TwoChars(char f, char s) :first(f), second(s) {}
	void print()
	{
		cout << "\tfirst : " << first << "," << "second : " << second << endl;
	}
};

class StateCode : public TwoChars
{
public:
	StateCode(char f, char s) : TwoChars(f, s) {}
	void print()
	{
		cout << "\tfirst : " << first << "," << "second : " << second << endl;
	}
};

void main()
{
	StateCode* pState1;
	TwoChars* pState2;

	pState1 = new StateCode('C', 'A');
	pState2 = new TwoChars('H', 'T');

	cout << "--class pointer로 치환 전" << endl;
	pState1->print();
	pState2->print();

	system("pause");
}