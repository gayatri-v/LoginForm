#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    Number(Number &obj)
    {
        cout << "the copy constructor is !!" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "the number is " << a << endl;
    }
};
int main()
{
    Number x, y, z(15),z2;
    x.display();
    y.display();
    z.display();

    Number z1(z);
    z1.display();//constructor invoked

    z2=z;//constructor does not invoked

    Number z3=z;//constructor invoked
    z3.display();
    return 0;
}

// we can copy the constructor from the same constructor function
// if we have not written any of the code for copying the constructor compiler will invoked the default constructor to copy so it will not genrate any error.