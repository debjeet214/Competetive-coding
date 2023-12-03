#include <iostream>
#include <string>
using namespace std;

class marks
{
public:
    int p, m, b, c, add;

    void getmarks(int phy, int math, int bio, int chem)
    {
        p = phy;
        m = math;
        b = bio;
        c = chem;
        add = p + m + c + b;
    }
    void show()
    {
        cout << " you got in total : " << add << endl;
    }
    float average()
    {
        return add / 4;
    }
    int division(int add)
    {
        if (add / 4 >= 70)
            cout << " you got the first division " << endl;
        else if (add / 4 >= 60 && add / 4 < 70)
            cout << " you got second division " << endl;
        else if (add / 4 >= 50 && add / 4 < 60)
            cout << " you got third division" << endl;
        else
            cout << " you are failed" << endl;
    }
};
int main()
{
    string name;
    int num;
    cout << "enter your name ";
    getline(cin, name);
    cout << " enter your roll";
    cin >> num;

    int p, m, b, c;
    cout << " enter your marks in physics : ";
    cin >> p;
    cout << " enter your marks in math : ";
    cin >> m;
    cout << " enter your marks in biology : ";
    cin >> b;
    cout << " enter your marks in chemistry : ";
    cin >> c;
    int add = p + m + b + c;
    cout << " your name is : " << name << endl;
    cout << " your roll is :  " << num << endl;
    marks one;
    one.getmarks(p, m, b, c);
    one.show();
    float x = one.average();
    cout << " your average marks is : " << x << endl;
    one.division(add);
}
