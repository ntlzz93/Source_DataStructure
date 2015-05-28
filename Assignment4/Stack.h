/* Set up Stack using Pointer */
#ifndef StackPointer_H
#define StackPointer_H

template<class T>
class StackLL{
private:
	struct Node{
		T data;
		Node* next;
	};
	Node* top;
public:
	StackLL();
	~StackLL();
//	StackLL(const StackLL<T> s);
	void push(T value);
	void pop();
	bool isEmpty()const;
	T Top()const;
};

#endif