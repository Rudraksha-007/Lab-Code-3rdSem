#include <iostream>
#include <vector>
using namespace std;
class base1
{
protected:
    int var1;

public:
    void setbase1(int x)
    {
        var1 = x;
    }
};
class base2
{
protected:
    int var2;
    
public:
    void setbase2(int x)
    {
        var2 = x;
    }
};
class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "The value of base 1 var is : " << var1 << endl;
        cout << "The value of base 2 var is : " << var2 << endl;
        cout << "The value sum is : " << var1 + var2 << endl;
    }
};
int main()
{
    derived aapl;
    aapl.setbase1(6);
    aapl.setbase2(5);
    aapl.show();
    return 0;
}