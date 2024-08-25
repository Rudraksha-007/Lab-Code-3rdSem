#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
float sqr(float x)
{
    return x * x;
}
class coordinate
{
private:
    float x, y, z;
    friend float distance(coordinate, coordinate);
public:
    coordinate();
    coordinate(int, int);
    coordinate(int, int, int);
};
coordinate::coordinate(int k, int l)
{
    x = k, y = l;
}
coordinate::coordinate(int k, int l, int h)
{
    x = k, y = l, z = h;
}
float distance(coordinate c1, coordinate c2)
{
    float c3;
    float x, y;
    x = sqr(c2.x - c1.x);
    y = sqr(c2.y - c1.y);
    c3 = sqrtf(x + y);
    return c3;
}

int main()
{
    coordinate p1(4, 5);
    coordinate p2(2, 4);
    cout << distance(p1, p2) << endl;

    return 0;
}