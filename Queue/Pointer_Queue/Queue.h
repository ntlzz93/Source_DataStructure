/* Set up Queue using pointer */
#ifndef QueuePointer_H
#define QueuePointer_H

template<class T>
class QueueLL{
private:
	struct Node{
		T data;
		Node* next;
	};
	 Node* front;
	 Node* rear;
public:
	QueueLL();
	~QueueLL();
	void Enqueue(T value);
	void Dequeue();
	bool isEmpty() const;
	T Front()const;
};


template<class T>
QueueLL<T>::QueueLL(){
	front = rear = NULL;
}
template<class T>
QueueLL<T>::~QueueLL(){
	// descontructor
}
template<class T>
void QueueLL<T>::Enqueue(T value){
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = NULL;
	if (front == NULL && rear == NULL){
		// add element onto queue the first time
		front = rear = newNode;
		return;
	}
	// add element onto queue when queue isn't empty
	rear->next = newNode;
	rear = rear->next;
}
template<class T>
void QueueLL<T>::Dequeue(){
	if (isEmpty()){
		// none element in queue
		return;
	}
	if (front->next != NULL){
		front = front->next;
	}
}
template<class T>
bool QueueLL<T>::isEmpty()const{
	if (front == NULL && rear == NULL)return true;
	else return false;
}
template<class T>
T QueueLL<T>::Front()const{
	// get data of front
	return front->data;
}
#endif