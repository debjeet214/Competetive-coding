#include <iostream>
using namespace std;
int main() {
   int row, p = 1;
   cout<<"enetr the row number"<<endl;
   cin>>row;
   for(int i = 1; i<=row; i++){
       for(int j= 1; j<=i; j++){
           cout<<p;
           p++;
       }
       cout<<endl;
   }
    return 0;
}
