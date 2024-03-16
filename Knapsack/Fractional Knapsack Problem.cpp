#include <bits/stdc++.h>
using namespace std;
struct Item {
	int profit, weight;
	Item(int profit, int weight){
		this->profit = profit;
		this->weight = weight;
	}
};
static bool cmp(struct Item a, struct Item b){
	float r1 = (float)a.profit / (float)a.weight;
	float r2 = (float)b.profit / (float)b.weight;
	return r1 > r2;
}
double fractionalKnapsack(int W, struct Item arr[], int N){
	sort(arr, arr + N, cmp);
	double finalvalue = 0.0;
	for (int i = 0; i < N; i++) {
		if (arr[i].weight <= W) {
			W -= arr[i].weight;
			finalvalue += arr[i].profit;
		}
		else {
			finalvalue
				+= arr[i].profit
				* ((double)W / (double)arr[i].weight);
			break;
		}
	}
	return finalvalue;
}
int main(){
	int W = 60;
	Item arr[] = { { 60, 10 }, { 100, 20 }, { 120, 30 } };
	int N = sizeof(arr) / sizeof(arr[0]);
	cout << fractionalKnapsack(W, arr, N);
	return 0;
}
