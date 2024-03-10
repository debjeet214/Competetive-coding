// C++ program to print all permutations with duplicates allowed 
// A permutation also called an “arrangement number” or “order,” is a rearrangement of the elements of an ordered list S into a one-to-one correspondence with S itself. A string of length N has N! permutations.

//  Time Complexity: O(N * N!) Note that there are N! permutations and it requires O(N) time to print a permutation.
//  Auxiliary Space: O(R – L)

#include <stdio.h> 
#include <string.h> 
void swap(char* x, char* y){ 
	char temp; 
	temp = *x; 
	*x = *y; 
	*y = temp; 
}
void permute(char* a, int l, int r){ 
	int i; 
	if (l == r) 
		printf("%s\n", a); 
	else { 
		for (i = l; i <= r; i++) { 
			swap((a + l), (a + i)); 
			permute(a, l + 1, r); 
			swap((a + l), (a + i)); // backtrack 
		} 
	} 
} 
int main(){ 
	char str[] = "ABC"; 
	int n = strlen(str); 
	permute(str, 0, n - 1); 
	return 0; 
}
