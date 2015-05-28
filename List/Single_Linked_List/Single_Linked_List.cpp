#include"Single_Linked_List.h"
template<class Type>
Single_Linked_List<Type>::Single_Linked_List(){
	head = NULL;
}
template<class Type>
Single_Linked_List<Type>::~Single_Linked_List(){
	
}
template<class Type>
bool Single_Linked_List<Type>::isEmpty(Node* p){
	bool outcome = true;
	if (p == NULL){
		outcome = true;
	}
	else{
		outcome = false;
	}
	return outcome;
}
template<class Type>
void Single_Linked_List<Type>::insertToHead(Type value){
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = head;
	head = newNode;
	
}
template<class Type>
void Single_Linked_List<Type>::insertToTail(Type value){
	Node* newNode = new Node();
	Node* p = head;
	if (head == NULL){
		newNode->data = value;
		newNode->next = NULL;
		head = newNode;
	}
	else{
		while (p->next != NULL){
			p = p->next;
		}
		p->next = newNode;
		newNode->data = value;
		newNode->next = NULL;
	}
}
template<class Type>
void Single_Linked_List<Type>::insertToPosition(Type value, Type pos){
	Node* newNode = new Node();
	Node* temp1 = head;
	 //insert first node position
	if (pos == 1){
		insertToHead(value);
	}
	else {
		// insert node nth position
		for (int i = 0; i < pos - 2; i++){
			temp1 = temp1->next;
		}
		newNode->data = value;
		newNode->next = temp1->next;
		temp1->next = newNode;
	}
	
}
template<class Type>
void Single_Linked_List<Type> ::deleteNodePos(Type pos){
	 //delete the first node
	Node* temp1 = new Node();
	temp1 = head;
	if (pos == 1){
		head->next = temp1->next;
		delete(temp1);
		return;
	}
	else{
		 //delete the nth node
		Node* temp2 = new Node();
		for (int i = 0; i < pos - 2; i++){
			temp1 = temp1->next;
			temp2 = temp1->next;
		}
		temp1->next = temp2->next;
		delete(temp2);
		return;
	}
}
template<class Type>
void Single_Linked_List<Type>::retreiveNode(Type &pos, Type &value){
	Node* temp = head;
	for (int i = 0; i < pos-1; i++){
		temp = temp->next;
	}
	value = temp->data;
}
template<class Type>
void Single_Linked_List<Type>::printRecursive(Node* p){
	if (p == NULL){
		return;
	}
	cout << p->data <<" ";
	printRecursive(p->next);
}
template<class Type>
void Single_Linked_List<Type>::reverse(Node* p){
	if (p == NULL){
		return;
	}
	reverse(p->next);
	cout << p->data<< " " ;
}
template<class Type>
void Single_Linked_List<Type>::print(){
	Node *temp = new Node();
	temp = head;
	cout << "List are: " << endl;
	while (temp->next != NULL){
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << temp->data << endl;
}