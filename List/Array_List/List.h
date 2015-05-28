#ifndef List_H
#define List_H
#include<iostream>
using namespace std;
const int Max = 20;
typedef int Type_List;

class List
{
private:
	int size;
	Type_List item[Max];
public:
	List();
	~List();
	bool isEmpty();
	int getLenght();
	void insert(Type_List data);
	void remove(int index);
	void retrieve(int index, Type_List & data);
	void sortArray(int arrays[]);
	int searchPosition(Type_List item[], int first, int last, int value);
	void print();
};
#endif
