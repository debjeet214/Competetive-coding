#include <stdio.h>
#include <limits.h>
#define MAX 9999
int n = 4;

int distan[20][20] = {

 {0, 22, 26, 30},

 {30, 0, 45, 35},

 {25, 45, 0, 60},

 {30, 35, 40, 0}};

int DP[32][8];

int TSP(int mark, int position){
 int completed_visit = (1 << n) - 1;

 if (mark == completed_visit) {

 return distan[position][0];

 }

 if (DP[mark][position] != -1) {

 return DP[mark][position];

 }

 int answer = MAX;

 for (int city = 0; city < n; city++) {

 if ((mark & (1 << city)) == 0) {

 int newAnswer = distan[position][city] + TSP(mark | (1 << city), city);

 answer = (answer < newAnswer) ? answer : newAnswer;

 }

 }

 return DP[mark][position] = answer;

}

int main() {

 for (int i = 0; i < (1 << n); i++) {

 for (int j = 0; j < n; j++) {

 DP[i][j] = -1;

}

 }

 printf("Minimum Distance Travelled -> %d\n", TSP(1, 0));

 return 0;

}
