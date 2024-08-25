#include <iostream>
#include <vector>
using namespace std;
class base1
{
    int value;

public:
    base1(int i = 0) : value(i)
    {
        cout << "Base1 class constructor called.\n";
    }
    void base1print()
    {
        cout << "Value = " << value << endl;
    }
};
class base2
{
    int value2;

public:
    base2(int i = 0) : value2(i)
    {
        cout << "Base2 class constructor called.\n";
    }
    void base2print()
    {
        cout << "value2 = " << value2 << endl;
    }
};
class derived : public base1, public base2
{
    int derived1;

public:
    derived() {}
    derived(int a, int b, int c) : base1(a), base2(b)
    {
        derived1 = c;
        cout << "Derived constructor called.\n";
    }
    void print()
    {
        cout << "The value of derived1 is : " << derived1 << endl;
    }
};
int main()
{
    derived obj(3, 4, 5);
    obj.print();
    // obj.base1.print();
    obj.base1print();
    obj.base2print();

    return 0;
}