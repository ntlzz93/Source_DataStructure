#include<iostream>
using namespace std;

struct node{
	int info;
	node* link;
};

node* head;
void insert_begin(int v);
void print();
void insert_last(int v);
void delete_node(int pos);
void retrieve(int index);
int main(){
	head = NULL;
	insert_begin(4);
	insert_begin(4);
	insert_begin(5);
	insert_last(3);
	insert_last(2);
	insert_last(7);
	print();
	cout << "-----" << endl;
	delete_node(2);
	print();
	cout << "-----" << endl;
	delete_node(1);
	print();
	cout << "-----" << endl;
	
	return 0;
}
void insert_begin(int v){
	node * temp = new node();
	temp->info = v;
	temp->link = head;
	head = temp;
	
}
void insert_last(int v){
	node* temp, *p;
	temp = new node();
	p = head;
	
	while (p->link != NULL){
		p = p->link;
	}	
	temp->info = v;
	temp->link = NULL;
	p->link = temp;
	
}
void delete_node(int pos){
	node* temp1 = new node();
	// temp1 is node n-1 position
	temp1 = head;
	if (pos == 1){
		head = head->link;
		delete(temp1);
		return;
	}
	node*temp2 = new node();
	// temp1 is node n+1 position
	for (int i = 0; i < pos - 2; i++){
		temp1 = temp1->link;
	}
	temp2 = temp1->link;
	temp1->link = temp2->link;
	delete(temp2);

}

void print(){
	node *temp = head;
	cout << "List are: ";
	while (temp != NULL){
		cout << temp->info << " ";
		temp = temp->link;
	}
	cout << "\n";
}