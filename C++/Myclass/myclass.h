#pragma once
#ifndef MYCLASS_H
#define	MYCLASS_H
#include<iostream>
#include<list>
#include<map>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


using namespace std;

class Myclass
{
private:
	std::list<int> tlist;
	std::map<int, int>tmap;
public:
	Myclass();
	~Myclass();
	void setData(int count);
	void displayList();
	void displayMap();

};


#endif // !MYCLASS_H

