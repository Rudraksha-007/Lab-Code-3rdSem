#include <iostream>
using namespace std;
class abst
{
    static int c;

public:
    virtual void func() = 0;
    static void fun()
    {
        cout << "Hello\n";
        cout << c << endl;
    }
};
int abst::c;
class time
{
    int h, m, s;

public:
    time() {}
    time(int x, int y, int z) : h(x), m(y), s(z) {}
    time operator+(time &v)
    {
        time ret;
        ret.h = h + v.h;
        ret.m = m + v.m;
        ret.s = s + v.s;
        ret.h %= 24;
        if (ret.m >= 60)
        {
            ret.h += 1;
        }
        if (ret.s >= 60)
        {
            ret.m += 1;
        }
        ret.m %= 60;
        ret.s %= 60;
        return ret;
    }
    bool operator>(time &v)
    {
        if (h > v.h)
            return true;
        else if (h == v.h and m > v.m)
            return true;
        else
            return false;
    }
    bool operator<(time &v)
    {
        if (h < v.h)
            return true;
        else if (h == v.h and m < v.m)
            return true;
        else
            return false;
    }
    void display()
    {
        cout << h << ":" << m << ":" << s << endl;
    }
    static void fun()
    {
        cout << "Hello\n";
        // cout << c << endl;
    }
};
 main()
{
    time t1(12, 59, 59), t2(12, 59, 59), t3;
    t3 = t1 + t2;
    // if (t1 > t2)
    t3.display();
    return 0;
}