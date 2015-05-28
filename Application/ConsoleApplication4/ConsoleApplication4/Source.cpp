#include"Header.h"


int main()
{
	Single_Linked_List<int>l;
	l.insertToHead(4);
	l.insertToTail(4);
	l.insertToPosition(4, 2);
	//l.isEmpty();
	l.deleteNodePos(2);
	//l.retreiveNode(2,7);
	//l.printRecursive();
	//l.reverse();
	l.print(2);
	l.~Single_Linked_List();


	system("pause");
	return 0;
}
