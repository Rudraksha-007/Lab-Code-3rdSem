#include <iostream>
#include <vector>
using namespace std;
// Base Class
class employee
{
  int id;

public:
  float salary;
  employee() {}
  employee(int inp)
  {
    id = inp;
    salary = 34;
  }
};
// Derived Class
class programmer : public employee
{
  /*
  private :
  int id;
  float salary;
  */
public:
  programmer() {}
  programmer(float x)
  {
    salary = x;
  }

  int lang_Code = 9;
};

int main()
{
  employee harry;
  cout << harry.salary << endl; // accessing public member of the base class
  programmer jhon(90);
  cout << jhon.salary << endl;
  // can't access in the privately inherited class
  return 0;
}