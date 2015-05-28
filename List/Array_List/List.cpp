#include "List.h"


List::List()
{
	size = 0;
}


List::~List()
{
}

bool List::isEmpty(){
	bool outcome = true;
	if (size != 0) outcome = false;
	else outcome = true;
	return outcome;
}
int List::getLenght(){
	return size;
}
void List::insert(Type_List data){
	item[size++] = data;
}
void List::remove(int index){
	if (index >= 0 && index <= Max){
		for (int i = index; i <size; i++){
			item[i] = item[i + 1];
		}
	}
	size--;
}
void List::retrieve(int index, Type_List &data){
	if (index >= 0 && index <= Max){
		for (int i = 0; i < size; i++){
			if (i == index){
				data = item[index];
			}
		}
	}
}
void List::sortArray(int arrays[]){
	// copy array
	for (int i = 0; i<getLenght(); i++){
		arrays[i] = item[i];
	}
	// bubble sort array
	for (int i = 0; i<getLenght(); i++){
		for (int j = i + 1; j < getLenght(); j++){
			if (arrays[i]>arrays[j]){
				int temp = arrays[i];
				arrays[i] = arrays[j];
				arrays[j] = temp;
			}
		}
	}
	cout << "Array was sorted: " << endl;
	for (int i = 0; i<getLenght(); i++){
		cout << "array[" << i << "] = " << arrays[i] << endl;
	}
}

int List::searchPosition(Type_List item[], int first, int last, int value){
	int index;
	if (first>last){
		index = -1;
	}
	else{
		int middle = (first + last) / 2;
		if (value == item[middle]){
			index = middle;
		}
		else{
			if (value < item[middle]){
				index = searchPosition(item, first, middle - 1, value);
			}
			else{
				index = searchPosition(item, middle + 1, last, value);
			}
		}
	}
	return index;
}
void List::print(){
	cout << "List: ";
	for (int i = 0; i < getLenght(); i++){
		cout << item[i] << " ";
	}
	cout << endl;
}