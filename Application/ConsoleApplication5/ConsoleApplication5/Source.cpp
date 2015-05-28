#include<iostream>
using namespace std;

void reverse_string(int length);
int main(){
	reverse_string(4);
	cout << endl;
	return 0;
}
void reverse_string(int length){
	char _char;
	if (length <= 1){
		cin >> _char;
		cout << _char;
		
	}
	else{
		cin >> _char;
		reverse_string(length - 1);
		cout << _char;
	}
	return;
}