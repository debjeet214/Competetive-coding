// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main(){
    int year;
    bool isLeapYear = 0;
    cout<<"enter the year: "<<endl;
    cin>>year;
    isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    if( isLeapYear == 0){
        cout<<"it is not the leap year";
    }
    else
    cout<<"it is a lear year";
}

