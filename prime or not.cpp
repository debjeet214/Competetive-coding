#include <iostream>
using namespace std;
int prime(int x){
    for(int i = 2; i< x; i++){
        if(x%i ==0){
            return false;
        }
    }
        return true;
}
int main() {
    int a, b;
    cout<<"enter the range";
    cin>>a>>b;
    for(int p = a; p<=b; p++){
        if(prime(p)){
            cout<<p<<" is a prime number bro"<<endl;
        }
    }
    return 0;
}
