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
#endif