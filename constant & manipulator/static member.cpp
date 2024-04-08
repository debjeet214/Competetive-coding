#include <iostream>
using namespace std;
class MyClass {
public:
  MyClass() {
    cout << "MyClass constructor called" <<endl;
    count++; 
  }
  static int count;
};
int MyClass::count = 0;
int main() {
  MyClass obj1; // First constructor call, 
  MyClass obj2; // Second constructor call,
  cout << "Count = "<< MyClass::count<< endl;
  return 0;
}
