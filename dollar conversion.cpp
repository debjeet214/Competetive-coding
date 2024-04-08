//dollar conversion rate with sequence with setw manipulator
#include <iostream>
#include<iomanip>
using namespace std;
int main() {
   float won, rupee, dollar;
   cout<<"tell how many dollar you want to convert"<<endl;
   cin>>dollar;
   won = dollar * 1286.654;
   rupee = dollar * 81.992;
   cout<<"equal value of korean won = "<<setw(5)<<setprecision(7)<<won<<endl;
   cout<<"equal value of indian rupee = "<<setw(3)<<setprecision(6)<<rupee;
 return 0;
}
