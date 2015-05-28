#include<iostream>
using namespace std;

void moveDisks(int , char , char , char );
int main(){
	char A = 'A', B='B', C='C';
	moveDisks(3, A, C,B);
	return 0;
}
void moveDisks(int count, char Beg, char End, char Aux){
	if (count > 0){
		moveDisks(count - 1, Beg, Aux, End);
		cout << "Move disk " << count << " from " << Beg << " to " << End << "." << endl;
		moveDisks(count - 1, Aux, End, Beg);
	}
}