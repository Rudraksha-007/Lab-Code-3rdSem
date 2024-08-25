#include <iostream>
#include <string>
using namespace std;
class complex
{
private:
    int r, i;

public:
    complex(void) // default constructor.
    {
        r = i = 0;
        cout << "Default Constructor called." << endl;
    }
    complex(int, int);
    // friend void printer(complex &);
    complex(complex &);
    void printer(void)
    {
        cout << r << " + i" << i << endl;
    }
};
complex::complex(complex &num)
{
    r = num.r;
    i = num.i;
    cout << "Copy constructor called." << endl;
    printer();
}
complex::complex(int b, int n) // parameterised constructor.
{
    r = b, i = n;
    cout << "Parameterised Constructor called." << endl;
    printer();
}
int main()
{
    complex z;
    complex c(4, 5);
    complex z1(c);
    // z1.printer(&z1);
    return 0;
}