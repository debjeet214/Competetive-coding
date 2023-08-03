#include <iostream>
using namespace std;
int main() {

  int i, n;
  int t1 = 0, t2 = 1;

  int nextterm = t1 + t2;
  cout<<"enter the number of terms"<<endl;
  cin>>n;
  cout<<t1<<" "<<t2<<" ";
  for (i = 3; i <= n; ++i) {
   cout<<nextterm<<" ";
    t1 = t2;
    t2 = nextterm;
    nextterm = t1 + t2;
  }

  return 0;
}
