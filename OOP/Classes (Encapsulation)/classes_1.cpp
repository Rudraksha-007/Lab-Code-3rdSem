#include <iostream>
#include <vector>
using namespace std;
class car
{
private:
    int year;
    void startengine();

public:
    void spark_Plug(int x)
    {
        if (x == 1)
        {
            startengine();
        }
    }
};
void car::startengine()
{
    cout << "Engine started." << endl;
}
int main()
{
    car porche_911;
    porche_911.spark_Plug(1);
    return 0;
}