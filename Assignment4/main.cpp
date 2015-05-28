#include<iostream>
using namespace std;
#include<string>
#include"Queue.h"
#include"Stack.h"


void readByStack(string s);
void readByQueue(string s);
bool Palindrome(string s);
string carryOutStack(StackLL<string> &s);
string carryOutQueue(QueueLL<string> &q);
StackLL<string> stack;
QueueLL<string> queue;

int main(){

	/*string str;
	cout << "Enter String ";
	getline(cin, str);
	if (Palindrome(str) == true){
	cout << "Palindrome!" << endl;
	}
	else
	cout << "Not Palindrome!" << endl;
*/
	return 0;
}
bool Palindrome(string s){
	bool outcome = true;
	readByStack(s);
	readByQueue(s);

	for (int i = 0; i < s.length(); i++){
		if (carryOutStack(stack) == carryOutQueue(queue)){
			// palindrome
			outcome = true;
		}
		else
		{
			outcome = false;
		}
	}
	return outcome;
}
void readByStack(string s){
	for (int i = 0; i < s.length(); i++){
		string temp;
		temp = s[i];
		stack.push(temp);
	}
}
void readByQueue(string s){
	for (int i = 0; i < s.length(); i++){
		string temp;
		temp = s[i];
		queue.Enqueue(temp);
	}
}
string carryOutStack(StackLL<string> &s){
	string str;
	if (s.isEmpty()){
		cout << " stack empty!" << endl;
	}
	str = s.Top();
	s.pop();
	return str;
}
string carryOutQueue(QueueLL<string> &q){
	string str;
	if (q.isEmpty()){
		cout << " queue empty!" << endl;
	}
	str = q.Front();
	q.Dequeue();
	return str;
}