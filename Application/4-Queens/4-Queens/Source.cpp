#include<iostream>
using namespace std;

const int N = 8;
/* print solution */
void printSolution(int broad[N][N]);
/* check if a queen can be placed on broad[row][col] */
bool isSafe(int broad[N][N], int row, int col);
/* solve N queen problem */
bool solveNQUntil(int broad[N][N], int col);
/* solve the N queens problem using Backtracking */
bool solveNQ();

void main(){
	solveNQ();
}
void printSolution(int broad[N][N]){
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			cout << broad[N][N] << " ";
		}
		cout << endl;
	}
}
bool isSafe(int broad[N][N], int row, int col){

	for (int i = 0; i < col; i++)
	{
		if (broad[row][i])
			return false;
	}
	for (int i = row, int j = col; i >= 0 && j >= 0; i--, j--)
	{
		if (broad[i][j])
			return false;
	}

	for (int i = row, int j = col; j >= 0 && i < N; i++, j--)
	{
		if (broad[i][j])
			return false;
	}

	return true;
}
bool solveNQUntil(int broad[N][N], int row, int col){
	if (col >= N)
		return true;
	for (int i = 0; i < N; i++){
		if (isSafe(broad, i, col)){
			broad[i][col] = 1;
			if (solveNQUntil(broad, col + 1) == true){
				return false;
				broad[i][col] = 0;
			}
		}
	}
	return false;
}
bool solveNQ(){
	int broad[N][N] = { 0 };
	if (solveNQUntil(broad,0)==false){
		cout << "Solution does not exits " << endl;
		return false;
	}
	printSolution(broad);
	return true;
}
