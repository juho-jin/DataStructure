#include<iostream>
#include<queue>
using namespace std;

int main()
{
	queue<int> myqueue;

	myqueue.push(5);
	myqueue.push(3);
	myqueue.front();
	cout << "front : " << myqueue.front() << endl;
	myqueue.size();
	cout << "size : " << myqueue.size() << endl;
	myqueue.pop();
	myqueue.push(7);
	myqueue.pop();
	myqueue.front();
	cout << "front : " << myqueue.front() << endl;
	myqueue.pop();
	//myqueue.pop();
	myqueue.empty();
	cout << "empty : " << myqueue.empty() << endl;

	return 1;
}