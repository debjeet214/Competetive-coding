#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the no. of rows you want : ";
    cin>>n;
    for(int i=0; i<n; i++){
        if(i%2 ==0){
            for(int j = 0; j<= i; j++){
                cout<<j+1;
            }
            cout<<endl;
        }
    }
    return 0;
}
