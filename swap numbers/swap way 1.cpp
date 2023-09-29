#include <iostream>
using namespace std;
int main() {
    int a, b;
    int c= 0;
    cout<<"enter the two numbers"<<endl;
    cin>>a>>b;
    for(int i =0; i<b; i++){
        a++;
    } // a= 11
    for(int i = a; i>b; i--){
        c++;
    }
    for(int i = a; i>b; i--){
        a--;
    }
    for(int i = a; i==b; i++){
        if(b>c){
            b--;
        }
        else
        b++;
    }
    cout<<"after swap the value of a is "<<a<<" and b is "<<b<<endl;
    cout<<c;
    return 0;
}
