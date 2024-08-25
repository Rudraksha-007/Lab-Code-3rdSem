#include <iostream>
#include <vector>
using namespace std;
class point_2d
{
private:
    int x, y;

public:
    point_2d(int x = 0, int y = 0) : x{x}, y{y} {}
    /* Note: this constructor has default arguments
    no need for a default constructor
    */
    void display()
    {
        cout << "x=" << x << " y=" << y << endl;
    }
    point_2d operator-()
    {
        point_2d u(-x, -y);
        return u;
    }
};
int main()
{
    point_2d b(4, 5);
    b.display();
    // point_2d n=-b;
    point_2d n = b.operator-();
    n.display();
    return 0;
}