#include <iostream>
using namespace std;

int main() {
    int lastdigit, copy, num, reverse = 0;
    cout<<"enter the number to check";
    cin>>num;
    copy = num;
    while(num>0){
        lastdigit = num%10;
        reverse = reverse*10 + lastdigit;
        num = num/10;
    }
    if(reverse == copy){
        cout<<"it is a palindrome number";
    }
    else
    cout<<"it is not a palindrome number";
    return 0;
}
