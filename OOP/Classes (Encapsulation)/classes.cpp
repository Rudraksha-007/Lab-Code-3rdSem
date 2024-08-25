#include <iostream>
#include <vector>
using namespace std;
class employee
{
private:
    int age;
    float salary;
    string name;
    int empID;

public:
    void set_Data(int, float, string, int);
    void get_Data()
    {
        cout << "Age \n" << age
             << "\nSalary \n"
             << salary << "\nName \n"
             << name
             << "\nEmp-ID\n" << empID << endl;
    }
};
void employee::set_Data(int a, float s, string n, int e)
{
    age = a;
    salary = s;
    name = n;
    empID = e;
}
int main()
{
    employee e;
    e.set_Data(23, 40000, "Jhon Doe", 401);
    e.get_Data();
    return 0;
}