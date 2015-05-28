#include"DLL.h"

Double_Linked_List::Double_Linked_List(){
	head = NULL;
	tail = NULL;
}
// create new node
Node* Double_Linked_List::getNewNode(int data){
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}
// insert element at head position
void Double_Linked_List::insertAtHead(int data){
	Node* newNode = getNewNode(data);
	if (head == NULL){
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head;
	head = newNode;
}
// insert element at last position
void Double_Linked_List::insertAtTail(int data){
	Node* newNode = getNewNode(data);
	Node* p = head;
	if (head == NULL){
		insertAtHead(data);
	}
	else{
		while (p->next != NULL){
			p = p->next;
		}
		p->next = newNode;
		newNode->prev = p;
	}
}
// insert element at nth position
void Double_Linked_List::insertAtPos(int index, int data){
	Node* temp1 = head;
	Node * newNode = getNewNode(data);
	// insert at first position
	if (index == 1){
		insertAtHead(data);
	}
	// insert at nth position
	for (int i = 0; i < index - 2; i++){
		temp1 = temp1->next;
	}
	newNode->next = temp1->next;
	temp1->next = newNode;
}
// delete element at nth position
void Double_Linked_List::deletePos(int index){
	Node* temp1 = head;

	// delete first node
	if (index == 1){
		head = temp1->next;
		delete(temp1);
		return;
	}
	// delete nth node
	Node* temp2 = new Node();
	for (int i = 0; i < index - 2; i++){
		temp1 = temp1->next;
	}
	temp2 = temp1->next;
	temp1->next = temp2->next;
	Node* temp3 = temp2->next;
	temp3->prev = temp1;
	delete(temp2);
}
// print list
void Double_Linked_List::printList(){
	Node* temp = new Node();
	temp = head;
	
	while (temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}