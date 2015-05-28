#ifndef SLinkedList_H
#define SLinkedList_H
#include<iostream>
using namespace std;

template <class Type> class Single_Linked_List{
private:
	struct Node{
		Type data;
		Node* next;
	}*head;
public:
	Single_Linked_List();
	~Single_Linked_List();
	bool isEmpty(Node* p);
	void insertToHead(Type value);
	void insertToTail(Type value);
	void insertToPosition(Type value, Type pos);
	void deleteNodePos(Type pos);
	void retreiveNode(Type &pos, Type &value);
	void print();
	void printRecursive(Node* p);
	void reverse(Node* p);
};
#endif