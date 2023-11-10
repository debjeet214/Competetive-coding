#include <iostream>
using namespace std;
class circle {
    float x;
    public:
        float area (float radius){
            return 3.14*radius*radius;
        }
        float circumference (float radius){
            return 2*3.14*radius;
        }
};
int main(){
    float rad;
    cout<<"enter the radius : ";
    cin>>rad;
    circle ex1;
    float circle_area = ex1.area(rad);
    float circle_circumference = ex1.circumference(rad);
    cout<<"the area is :"<<circle_area<<"and the circumference is :"<<circle_circumference<<endl;
}
