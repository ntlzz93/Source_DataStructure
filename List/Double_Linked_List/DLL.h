#ifndef Double_Linked_List_H
#define Double_Linked_List_H
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* prev;
	Node* next;
};

class Double_Linked_List{
	Node* head;
	Node* tail;
public:
	Double_Linked_List();
	// create a new node
	Node* getNewNode(int data);
	// functions
	void insertAtHead(int data);
	void insertAtTail(int data);
	void insertAtPos(int index, int data);
	void deletePos(int index);
	void retreive(int index, int &data);
	// print
	void printList();
	void recursivePrintList();
};

#endif