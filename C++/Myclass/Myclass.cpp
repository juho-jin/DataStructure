#include"myclass.h"


Myclass::Myclass() {}

Myclass::~Myclass() {}

void Myclass::setData(int count)
{
	for (int i = 0; i < count; i++)
		tlist.push_front(rand() % 101);
	//for (int j = 0; j < count; j++)
	//	tmap.insert(make_pair(j, rand() % 101));
}

void Myclass::displayList()
{
	//list<int>::iterator tl;
	//for (tl = tlist.begin(); tl != tlist.end(); tl++);
	//	cout << *tl << " ";

	for (auto list : tlist)
		cout << list << " ";
}

void Myclass::displayMap()
{
	//map<int, int>::iterator tl;
	//for (tl = tmap.begin(); tl != tmap.end(); tl++);
	//	cout << *tl << " ";
}