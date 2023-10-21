#include <iostream>
using namespace std;
int fact( int n){
    int factorial = 1;
    for(int i =2; i<=n; i++){
        factorial*= i;
    }
    return factorial;
}

int main() {
  
  int num;
    cout<<"enter the number to find the factorial";
    cin>>num;
    cout<<"factorial of"<<num<<"is"<<fact(num);
    return 0;
}
