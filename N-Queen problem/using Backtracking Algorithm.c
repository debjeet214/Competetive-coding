#define N 5
#include <stdbool.h>
#include <stdio.h>
#include<math.h>

void printSolution(int board[N][N]){ // A utility function to print solution
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if(board[i][j])
				printf("Q ");
			else
				printf(". ");
		}
		printf("\n");
	}
}
// A utility function to check if a queen can be placed on board[row][col]. 
bool isSafe(int board[N][N], int row, int col){
	int i, j;
	for (i = 0; i < col; i++)  // Check this row on left side
		if (board[row][i])
			return false;
			
	for (i = row, j = col; i >= 0 && j >= 0; i--, j--) // Check upper diagonal on left side
		if (board[i][j])
			return false;

	for (i = row, j = col; j >= 0 && i < N; i++, j--) // Check lower diagonal on left side
		if (board[i][j])
			return false;
	return true;
}
// A recursive utility function to solve N Queen problem
bool solveNQUtil(int board[N][N], int col){
	if (col >= N)
		return true;
	for (int i = 0; i < N; i++) {
		if (isSafe(board, i, col)) {
			board[i][col] = 1;
			if (solveNQUtil(board, col + 1))
				return true;
			board[i][col] = 0; // BACKTRACK
		}
	}
	return false;
}
// This function solves the N Queen problem using Backtracking. It mainly uses solveNQUtil() to solve the problem. It returns false if queens cannot be placed, otherwise, return true and prints placement of queens in the form of 1s.Please note that there may be more than one solutions, this function prints one of the feasible solutions.
bool solveNQ(){
	int board[N][N] = { { 0, 0, 0, 0, 0 },
						{ 0, 0, 0, 0, 0 },
						{ 0, 0, 0, 0, 0 },
						{ 0, 0, 0, 0, 0 },
						{ 0, 0, 0, 0, 0}};
	if (solveNQUtil(board, 0) == false) {
		printf("Solution does not exist");
		return false;
	}
	printSolution(board);
	return true;
}

int main(){
	solveNQ();
	return 0;
}
