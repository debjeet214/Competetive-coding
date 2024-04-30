// Online C compiler to run C program online
#include <stdio.h>
void floyd(int b[3][3]){
    int j, i, k;
    for (int k = 0; k < 3; k++){
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                if((b[i][k] * b[k][j] != 0) && (i !=j)){
                    if(b[i][k] + b[k][j] || (b[i][j] ==0) ){
                        b[i][j] = b[i][k] + b[k][j];
                    }
                }
            }
        }
    } 
    for(i = 0; i<3; i++){
        printf("Minimum cost with respect to node : %d\n", i);
        for(j =0; j<3; j++){
            
        }
    }
}

int main(){
    int b[3][3] = {0};
    b[0][1] = 10;
    b[1][2] = 15;
    b[2][0] =12;
    floyd(b);
    return 0;
}
