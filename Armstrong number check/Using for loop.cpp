#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, digit, lastdigit, copy;
    int sum = 0;
    cout<<"enter a number to check";
    cin>>num;
    cout<<"enter the no of digits are there in the number";
    cin>>digit;
    copy = num;
    for(int i =1; i<= digit; i++){
        lastdigit = num%10;
        sum = sum + pow(lastdigit,digit);
        num = num/10;
    }
    if(sum == copy){
        cout<<"its a amstrong number";
    }
    else
    cout<<"its not amstrong number";
    return 0;
}
