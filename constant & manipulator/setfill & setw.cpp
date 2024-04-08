//filling with x before the numnber
#include <iostream>
#include<iomanip>
using namespace std;
int main() {
  cout<<"number : 9838577235"<<endl;
  cout<<"Default: "<<setw(10)<<35<<endl;
  cout<<"setfill: "<<setw(10)<<setfill('x')<<35<<endl;
 return 0;
}
