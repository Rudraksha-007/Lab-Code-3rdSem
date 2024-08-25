#include <iostream>
#include <vector>
using namespace std;
class complex
{
private:
    int r, i;
    
public:
    void set_Number(int x, int y);
    friend complex sum(complex x, complex y);
    void printer()
    {
        cout << "Your number is " << r << " + "
             << "i" << i << endl;
    }
};
void complex ::set_Number(int x, int y)
{
    r = x, i = y;
}
complex sum(complex x, complex y)
{
    complex z;
    z.set_Number(x.r + y.r, x.i + y.i);
    return z;
}

int main()
{
    complex c1, c2, sum_No;
    c1.set_Number(2, 3);
    // c1.sum(c1,c2);
    c2.set_Number(5, 6);
    c1.printer(), c2.printer();
    sum_No = sum(c1, c2);
    sum_No.printer();
    return 0;
}