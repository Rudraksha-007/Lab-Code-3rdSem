#include <iostream>
using namespace std;

class point_2d
{
private:
    int x, y;
    friend point_2d operator-(point_2d &, point_2d &);
    friend point_2d operator*(point_2d &, point_2d &);

public:
    point_2d() {}                              // Constructors
    point_2d(int ix, int iy) : x(ix), y(iy) {} // Constructors

    void display()
    {
        cout << "x=" << x << " y=" << y << endl;
    }

    point_2d operator+(point_2d &v)
    {
        point_2d result(x + v.x, y + v.y);
        result.display();
        return result;
    }
    point_2d operator/(point_2d &v)
    {
        point_2d result(x / v.x, y / v.y);
        result.display();
        return result;
    }
};
point_2d operator-( point_2d &b,  point_2d &v)
{
    point_2d result(b.x - v.x, b.y - v.y);
    result.display();
    return result;
}

point_2d operator*(point_2d &v, point_2d &b)
{
    point_2d result(b.x * v.x, b.y * v.y);
    result.display();
    return result;
}
int main()
{
    point_2d b(4, 5);
    b.display();
    point_2d n(3, 3);
    n.display();
    cout << "Addition : " << endl;
    b + n;
    cout << "Substraction b-n : " << endl;
    b - n;
    cout << "Multiplication : " << endl;
    b *n;
    cout << "Substraction n-b : " << endl;
    n - b;
    return 0;
}