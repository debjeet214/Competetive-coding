#include <iostream>
using namespace std;
int main() {
   int row;
   cout<<"enter the row number: "<<endl;
   cin>>row;
   for(int i = 1; i<=row; i++){
       for(int j= 1; j<=i; j++){
           cout<<i;
       }
       cout<<endl;
   }
    return 0;
}
