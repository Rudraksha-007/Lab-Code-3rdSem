#include <iostream>
#include <vector>
using namespace std;
class distance
{
    int km, m, cm;

public:
    distance(int x = 0, int y = 0, int z = 0) : km(x), m(y), cm(z) {}
    distance operator+(distance &v)
    {
        distance ret;
    }
};
int main()
{
    cout << "Enter distances in kilometer, meter,centimeter " << endl;
    return 0;
}