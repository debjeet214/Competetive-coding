#include <iostream>
using namespace std;
int bintodec(int n){
    int ans = 0;
    int x = 1;
    while(n>0){
        int y = n%10;
        ans = ans + (x*y);
        x*=8;
        n= n/10;
    }
    return ans;
}
int main() {
    int x;
    cout<<"enter the octal number";
    cin>>x;
    cout<<"the decimal of it is"<<bintodec(x);
   return 0;
