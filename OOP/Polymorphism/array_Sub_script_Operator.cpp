#include <iostream>
#include <vector>
using namespace std;
class point_2d
{
private:
    int coord[2];

public:
    point_2d(int ix = 0, int iy = 0) // paramterised constructor w/default argument
    {
        coord[0] = ix;
        coord[1] = iy;
    }
    void display()
    {
        cout << "x=" << coord[0] << " y=" << coord[1] << endl;
    }
    int &operator[](char c)
    {
        if (c == 'x')
        {
            return coord[0];
        }
        else if (c == 'y')
        {
            return coord[1];
        }
        else
        {
            cout << "Out of Bounds\n";
            exit(0);
        }
    }
};
int main()
{
    point_2d pt1(1, 3);
    pt1.display();
    pt1['x']=9;
    pt1['y']=8;
    pt1.display();
    return 0;
}