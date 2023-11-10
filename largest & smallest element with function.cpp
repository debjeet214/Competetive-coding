#include <iostream>
using namespace std;
void max(int a, int b, int c){
    if(a>b && a>c){
        cout<<a<<" is the largest number"<<endl;
    }
    else if(b>a && b>c){
        cout<<b<<" is the largest number"<<endl;
    }
    else
    cout<<c<<" is the largest number"<<endl;
}
void min(int a, int b, int c){
    if(a<b && a<c){
        cout<<a<<" is the minimum number"<<endl;
    }
    else if(b<a && b<c){
        cout<<b<<" is the minimum number"<<endl;
    }
    else
    cout<<c<<" is the minimum number"<<endl;
}
int main() {
    int x, y, z;
    cin>>x>>y>>z;
    max(x,y,z);
    min(x,y,z);
    return 0;
}
