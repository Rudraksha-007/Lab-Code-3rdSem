#include <iostream>
#include <vector>
using namespace std;
class c2;
class c1
{
    int val1;
    friend void swap(c1 &, c2 &);

public:
    void setdata(int c)
    {
        val1 = c;
    }

    void print(void)
    {
        cout << val1 << endl;
    }
};
class c2
{
    int val1;
    friend void swap(c1 &, c2 &);

public:
    void setdata(int c)
    {
        val1 = c;
    }

    void print(void)
    {
        cout << val1 << endl;
    }
};
void swap(c1 &x, c2 &y)
{
      int temp=x.val1;
      x.val1=y.val1;
      y.val1=temp;
}
int main()
{
    c1 l;
    l.setdata(9);
    l.print();
    c2 k;
    k.setdata(6);
    k.print();
    swap(l,k);
    cout << endl;
    l.print();
    k.print();
    return 0;
}