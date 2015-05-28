#include<iostream>
using namespace std;

template<class Type>
class Single_Linked_List
{
private:
	struct Node
	{
		Type data;
		Node* next;
	};
	Node *head, *last, *previous;
public:
	Single_Linked_List()
	{
		head = NULL;
		previous = NULL;
		last = NULL;
	}
	~Single_Linked_List()
	{
		Node *temp;
		previous = head;
		while (head != NULL)
		{
			temp = head;
			previous = head->next;
			head = previous->next;
			delete temp;
		}
	}
	/*template<class Type>
	bool Single_Linked_List<Type>::isEmpty(Node* p)
	{
	bool outcome = true;
	if (p == NULL)
	{
	outcome = true;
	}
	else
	{
	outcome = false;
	}
	return outcome;
	}*/
	template<class Type>
	void insertToHead(Type value)
	{
		Node* newNode = new Node;
		newNode->data = value;
		head = newNode;
		last = newNode;
		newNode->next = NULL;
	}
	template<class Type>
	void insertToTail(Type value)
	{
		Node* newNode = new Node;
		if (head == NULL)
		{
			newNode->data = value;
			newNode->next = NULL;
			head = newNode;
		}
		else
		{
			last->next = newNode;
			newNode->data = value;
			newNode->next = NULL;
			last = newNode;
		}
	}
	template<class Type>
	void insertToPosition(Type value, Type pos)
	{
		Node* newNode = new Node;
		Node* temp1 = head;
		//insert first node position
		if (pos == 1)
		{
			insertToHead(value);
		}
		else
		{
			// insert node nth position
			for (int i = 0; i<pos - 2; i++)
			{
				temp1 = temp1->next;
			}
			newNode->data = value;
			temp1->next = newNode;
			newNode->next = last;
		}

	}
	template<class Type>
	void deleteNodePos(Type pos)
	{
		//delete the first node
		Node* temp1;
		temp1 = head;
		if (pos == 1)
		{
			temp1 = head;
			head = head->next;
			delete temp1;
			temp1 = NULL;
			return;
		}
		else
		{
			//delete the nth node
			for (int i = 0; i <= pos - 2; i++)
			{
				temp1 = head->next;
			}
			head->next = temp1->next;
			delete temp1;
			temp1 = NULL;
			return;
		}
	}
	/*template<class Type>
	void Single_Linked_List<Type>::retreiveNode(Type& pos, Type& value)
	{
	Node* temp=head;
	for(int i=0;i<pos-1;i++)
	{
	if(temp->data!=value)
	temp=temp->next;
	else
	break;

	}
	value=temp->data;
	}*/
	/*template<class Type>
	void Single_Linked_List<Type>::printRecursive(Node* p)
	{
	if (p == NULL)
	{
	return;
	}
	cout << p->data <<" ";
	printRecursive(p->next);
	}*/
	/*template<class Type>
	void Single_Linked_List<Type>::reverse(Node* p)
	{
	if (p == NULL)
	{
	return;
	}
	reverse(p->next);
	cout << p->data<< " " ;
	}*/
	template<class Type>
	void print(Type value)
	{
		Node *temp = new Node;
		previous = head;
		cout << "List are: " << endl;
		while (temp != NULL)
		{
			if (previous != NULL)
				temp = previous;
			if (temp != NULL)
				cout << temp->data << "->";
			if (previous != NULL)
				previous = head->next;
			temp = previous;
			if (previous != NULL)
				previous = previous->next;
		}
	}
};
