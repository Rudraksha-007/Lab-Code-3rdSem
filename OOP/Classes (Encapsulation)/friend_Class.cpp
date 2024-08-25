#include <iostream>
#include <vector>
using namespace std;
class complex
{
protected:
    friend class calculator;
private:
    int r, i;
    // friend class calculator;
public:
    // friend class calculator;
    void set_Value(int x, int y)
    {
        r = x;
        i = y;
    }
    void print()
    {
        cout << r << " + " << i << "i" << endl;
    }
};
class calculator
{
public:
    complex sum(complex o1, complex o2)
    {
        complex ret;
        ret.r = o1.r + o2.r;
        ret.i = o1.i + o2.i;
        return ret;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.set_Value(3, 4);
    c1.print();

    c2.set_Value(3, 1);
    c2.print();

    calculator c;
    c3 = c.sum(c1, c2);
    c3.print();
    return 0;
}