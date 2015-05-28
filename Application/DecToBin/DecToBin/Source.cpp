#include<iostream>
using namespace std;

void DecToBin(int num, int base){
	if (num > 0){
		DecToBin(num / base, base);
		cout << num % base ;
	}
}
void main(){
	int base=2;
	int decimalNumber;
	cout << "Enter decimal number :";
	cin >> decimalNumber;
	cout << "Decimal " << decimalNumber << " = ";
	DecToBin(decimalNumber,base);
	cout << " binary" << endl;
	
}