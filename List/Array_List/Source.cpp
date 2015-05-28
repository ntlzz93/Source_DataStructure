
#include"List.h"

int main(){
	List _list;
	_list.insert(22);
	_list.insert(11);
	_list.insert(19);
	_list.insert(10);
	_list.insert(29);
	_list.insert(0);

	int arrays[Max];
	_list.print();
	_list.sortArray(arrays);
	
	cout << "index : ";
	cout << _list.searchPosition(arrays, 0, 5, 29) << endl;
	
	return 0;
}