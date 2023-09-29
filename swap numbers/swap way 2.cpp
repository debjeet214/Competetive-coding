#include <iostream>
using namespace std;
int main() {
    int a, b;
    //int c= 0;
    cout<<"enter the two numbers"<<endl;
    cin>>a>>b;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"after swap the value of a is "<<a<<" and b is "<<b<<endl;

    return 0;
}
