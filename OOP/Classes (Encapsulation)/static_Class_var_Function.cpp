#include <iostream>
#include <vector>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void set_Data()
    {
        cout << "Enter the ID " << endl;
        cin >> id;
        count++;
    }
    void get_Data()
    {
        cout << "Id is " << id << endl;
    }
    static void get_Count()
    {
        cout << "the  value of count is : " << count << endl;
    }
};
int employee::count;
int main()
{
    employee harry, putin, stalin;
    harry.set_Data();
    harry.get_Data();
    harry.get_Count();

    putin.set_Data();
    putin.get_Data();
    putin.get_Count();

    stalin.set_Data();
    stalin.get_Data();
    stalin.get_Count();
    return 0;
}