#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<Windows.h>
using namespace std;

const int Size = 3;
int board[Size][Size];

void printBoard();
void playGame(int choose);
bool checkWon();
bool checkRow();
bool checkCol();
bool check();
void PlayerX();
void Player0();

int main(){
	printBoard();
	return 0;
}

void printBoard(){
	int count = 1;
	for (int i = 0; i < Size; i++){
		for (int j = 0; j < Size; j++){
			board[i][j] = count++;
		}
	}
	for (int i = 0; i < Size; i++){
		for (int j = 0; j < Size; j++){
			cout << board[i][j] << "  ";
		}
		cout << endl << endl;
	}
}
void playGame(int choose){
	do{
		// player X


	} while (1);
}
void PlayerX(){
	int go;
	cout << "Player X: "; cin >> go;
	char x = 'X';

}
void Player0(){
	int go;
	cout << "Player 0: "; cin >> go;
	char o = '0';
}