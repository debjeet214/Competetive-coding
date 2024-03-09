// Recursion Approach for 0/1 Knapsack Problem
#include <bits/stdc++.h> 
using namespace std; 
int max(int a, int b) { return (a > b) ? a : b; } // A utility function that returns maximum of two integers 

int knapSack(int W, int wt[], int val[], int n){ 
	if (n == 0 || W == 0) 
		return 0; 
	if (wt[n - 1] > W) 
		return knapSack(W, wt, val, n - 1);
	else
		return max( 
			val[n - 1] 
				+ knapSack(W - wt[n - 1], wt, val, n - 1), 
			knapSack(W, wt, val, n - 1)); 
} 
int main(){ 
	int profit[] = { 5, 2, 7, 6 }; 
	int weight[] = { 2, 3, 4, 5 }; 
	int W = 7; 
	int n = sizeof(profit) / sizeof(profit[0]); 
	cout << knapSack(W, weight, profit, n); 
	return 0; 
} 
