#include <iostream>
#include<iomanip>
using namespace std;
int main() {
   double x= 7.219878685493;
   cout<<"before setprecision operator"<<endl;
   cout<<"the value of x is :"<<x<<endl;
   cout<<"after setprecision operator"<<endl;
   cout<<"\n";
   cout<<"x with precision 1 :"<<setprecision(1)<<x<<endl;
   cout<<"x with precision 3 :"<<setprecision(3)<<x<<endl;
   cout<<"x with precision 5 :"<<setprecision(5)<<x<<endl;
   cout<<"x with precision 8 :"<<setprecision(8)<<x<<endl;
   cout<<"x with precision 10 :"<<setprecision(10)<<x<<endl;
 return 0;
}
