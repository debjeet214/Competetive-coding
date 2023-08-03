#include <iostream>
using namespace std;
int fact(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    else
    return (n*fact(n-1));
}
int main() {
    int n;
    cout<<"enter the number of rows you need";
    cin>>n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i; j++){
            cout<<fact(i)/(fact(j)*(fact(i-j)));
        }
        cout<<endl;
    }
    return 0;
}
