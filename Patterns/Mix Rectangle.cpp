#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the no. of rows you want";
    cin>>n;
    for(int i =n; i>=1; i--){
        for(int j = 1; j<=i; j++){
            cout<<"A";
        }
        for(int k = 1; k<=n-i+1;k++){
            cout<<"B";
        }
        cout<<endl;
    }
    return 0;
}
