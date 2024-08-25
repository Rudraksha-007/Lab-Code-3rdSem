#include <iostream>
#include <vector>
using namespace std;
class calc
{
private:
    int x, y;

public:
    inline float add(int x, int y)
    {
        return x + y;
    }
    inline float diff(int x, int y)
    {
        if (x > y)
            return x - y;
        else
            return y - x;
    }
    // inline float 
};
int main()
{
    return 0;
}