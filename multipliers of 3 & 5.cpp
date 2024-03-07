#include <iostream>
using namespace std;

int main(){
    int t, sum = 0;
    cin >> t;
    for(int n = 1; n <= t; n++){
        if(n%3 == 0 || n%5 == 0){
            sum = sum+n;
            cout<<n;
        }
    }
    cout<<sum;
    return 0;
}
