#include <iostream>
#include <vector>
using namespace std;
class y;
class x
{
    int num;
public:
    void setdata(int c)
    {
        num = c;
    }
    friend void sum(x, y);
};
class y
{
private:
    int data;
    friend void sum(x, y);
public:
    void setdata(int y)
    {
        data = y;
    }
};
void sum(x o1, y o2)
{
    cout << "The sum is " << o1.num + o2.data << endl;
}

int main()
{
    x a;
    a.setdata(9);
    y k;
    k.setdata(1);
    sum(a,k);
    return 0;
}