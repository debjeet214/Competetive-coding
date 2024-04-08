#include <iostream>
using namespace std;

int main() {
    int num, digit, lastdigit, copy;
    int sum = 0;
    cout<<"enter a number to check";
    cin>>num;
    copy = num;
    for(int i =1; i<= 4; i++){
        lastdigit = num%10;
        sum = sum + lastdigit*lastdigit*lastdigit*lastdigit;
        num = num/10;
    }
    if(sum == copy){
        cout<<"its a amstrong number";
    }
    else
    cout<<"its not amstrong number";
    return 0;
}
