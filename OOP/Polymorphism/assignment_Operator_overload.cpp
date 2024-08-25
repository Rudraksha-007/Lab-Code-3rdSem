#include <iostream>
#include <vector>
using namespace std;
class test
{
    int *x;

public:
    test(int val = 0) : x(new int(val)) {}
    void setx(int val)
    {
        *x = val;
    }
    void print()
    {
        cout << "Value = " << *x << endl;
    }
    ~test()
    {
        delete x;
    }
    test &operator=(const test &obj)
    {
        if (this != &obj)
        {
            (*x) = *obj.x;
        }
        return *this;
    }
};
int main()
{
    test c(10);
    test v;
    v = c;
    v.setx(9);
    v.print(), c.print();
    return 0;
}