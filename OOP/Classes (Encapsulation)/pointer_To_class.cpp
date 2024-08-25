#include <iostream>
#include <vector>
using namespace std;
class baseclass
{
private:
    // baseclass(int x=0):base(x){}
    int priv;

public:
    int base;
    void display()
    {
        cout << "The value of base in BASECLASS : " << base << endl;
    }
};
class derived : public baseclass
{
private:
    // derived(int x=0):derived_var(x){}
public:
    int derived_var;
    void display()
    {
        cout << "The value of derived in DERIVEDCLASS : " << derived_var << endl;
    }
};
int main()
{
    // base class pointer points to derived class object
    baseclass *ptr;
    derived obj;
    ptr = &obj;
    ptr->base = 90;
    // (*ptr).display();
    ptr->display(); // calls the base class function

    // derived class pointer points to derived class object
    derived *ptr2;
    derived y;
    ptr2 = &y;
    ptr2->derived_var = 90;
    ptr2->display();

    // derived class pointer points to baseclass object
    derived *ptr3;
    baseclass obj2;
    // ptr3=&obj2;
    // this is invalid
    return 0;
}