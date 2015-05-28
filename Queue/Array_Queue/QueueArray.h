#ifndef QueueArray_H
#define QueueArray_H

const int MAX_SIZE = 100;

template<class T>
class Queue{
private:
	int rear;
	int front;
	T item[MAX_SIZE];
public:
	Queue();
	bool isEmpty();
	bool isFull();
	void Enqueue(T value);
	void Dequeue();
	T Front();
};

template<class T>
Queue<T>::Queue(){
	rear = front = -1;
}
template<class T>
bool Queue<T>::isEmpty(){
	if (rear == -1 && front == -1)
		return true;
	else
		return false;
}
template<class T>
bool Queue<T>::isFull(){
	if (rear == MAX_SIZE)
		return true;
	else
		return false;
}
template<class T>
void Queue<T>::Enqueue(T value){
	if (isFull())
		return;
	else{
		if (isEmpty()){
			rear = front = 0;
		}
		else{
			rear += 1;
		}
		item[rear] = value;
	}
}
template<class T>
void Queue<T>::Dequeue(){
	if (isEmpty()){
		return;
	}
	else{
		if (rear == front){
			rear = rear - 1;
			front = front - 1;
		}
		else{
			front = front + 1;
		}
	}
}
template<class T>
T Queue<T>::Front(){
	return item[front];
}
#endif