#include"DLL.h"

int main(){
	Double_Linked_List d;
	cout << "List are: ";

	d.insertAtTail(3);
	d.insertAtHead(2);
	d.insertAtHead(1);
	d.insertAtTail(4);
	d.insertAtPos(3, 7);
	d.printList();

	d.deletePos(4);
	d.printList();

	
	return 0;
}