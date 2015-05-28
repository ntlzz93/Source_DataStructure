#include<iostream>
using namespace std;
#include"list.h"
int main(){
	
	list<int> _l;
	cout << "----------------Menu----------" << endl;
	cout << "1. Initilization array " << endl;
	cout << "2. Insert element into array " << endl;
	cout << "3. Retreive element into array " << endl;
	cout << "4. Print Array " << endl;
	cout << "Else. Close Program " << endl;
	int val;
	cout << "Enter number need implement "; cin >> val;
	switch (val){
	case 1:
		// function initilization array
		_l.initialization_arrays();
		
		break;
	case 2:
		// insert element into array
		int _pos, _value;
		cout << "Insert element from position to value " << endl;
		cout << "position: "; cin >> _pos;
		cout << "value: "; cin >> _value;
		_l.insert(_pos, _value);
		
		break;
	case 3:
		//retreive element to array
		int data;
		int pos;
		cout << "postion: "; cin >> pos;
		_l.retreive(pos, data);
		cout << "data = " << data << endl;
		
	case 4:
		// print
		_l.print();
		
	default:
		char str;
		cin.get(str);
		cout << "Exit" << endl;
	}
	return 0;
}