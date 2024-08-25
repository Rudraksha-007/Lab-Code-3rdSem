#include <iostream>
#include <vector>
using namespace std;
class car
{
    private:
    
protected:
    int year;
    string brand;
    string model;
public:
    void info_Discharge()
    {
        cout << "Brand : " << brand << " Model : "
             << model << " Year : "
             << year << endl;
    }
};
class sedan : public car
{
private:
    int seat_Num;
public:
    void info_Discharge()
    {
        cout << "Brand : " << brand << " Model : "
             << model << " Year : "
             << year << endl;
    }
    void set_Data(string b,string m,int y)
    {
        year=y;
        brand=b;
        model=m;
    }
    void open_Trunk()
    {
        cout << "The trunk is now open." << endl;
    }
};
int main()
{
    sedan toyota;
    toyota.set_Data("Toyota","Corolla",2016);
    toyota.info_Discharge();
    toyota.open_Trunk();
    return 0;
}