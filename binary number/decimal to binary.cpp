#include <iostream>
using namespace std;
void decimaltobinary(int n){
    int binary[30];
    int i = 0;
    while(n>0){
        binary[i]=n%2;
        n/= 2;
        i++;
    }
    for(int j = i-1; j>=0; j++)
    cout<<binary[j];
}
int main(){
    int num;
    cout<<"enter the number";
    cin>>num;
    decimaltobinary(num);
    return 0;
}
