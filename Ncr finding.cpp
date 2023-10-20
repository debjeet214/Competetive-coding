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
    int n, r;
    int ans;
    cout<<"enter the value of n, r in nCR";
    cin>>n>>r;
    ans = (fact(n)/(fact(r)*fact(n-r)));
    cout<<ans ;
    return 0;
}
