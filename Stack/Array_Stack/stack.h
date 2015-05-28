#ifndef stackarray_h
#define stackarray_h
#include<iostream>
#include<string>
using namespace std;

const int MAX_SIZE = 100;
typedef string Type;

class Stack{
private:
	Type item[MAX_SIZE];
	int top;
public:
	Stack();
	bool isEmpty()const;
	void push(Type value);
	void pop();
	Type getTop();
};

Stack::Stack(){
	top = -1;
}
bool Stack::isEmpty()const{
	if (top == -1)
		return true;
	else
		return false;
}
void Stack::push(Type value){
	item[++top] = value;
}

void Stack::pop(){
	if (top != -1){
		top = top - 1;
	}
}

Type Stack::getTop(){
	return item[top];
}

#endif