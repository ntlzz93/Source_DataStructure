#include"Stack.h"


template<class T>
StackLL<T>::StackLL(){
	top = NULL;
}
template<class T>
StackLL<T>::~StackLL(){
	while (top != NULL){
		Node* temp = top;
		top = top->next;
		delete(temp);
	}
}
//template<class T>
//StackLL<T>::StackLL(StackLL<T> s){
//	// copy constructor
//	while (top != NULL){
//		s.push(Top());
//		top = top->next;
//	}
//}
template<class T>
void StackLL<T>::push(T value){
	// push elements of stack at head
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = top;
	top = newNode;
}
template<class T>
void StackLL<T>::pop(){
	// pop elements of stack at head
	Node* temp = top;
	top = top->next;
	delete(temp);
}
template<class T>
bool StackLL<T>::isEmpty()const{
	if (top == NULL) return true;
	else return false;
}
template<class T>
T StackLL<T>::Top()const{
	return top->data;
}