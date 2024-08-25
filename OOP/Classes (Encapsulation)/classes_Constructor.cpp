#include <iostream>
using namespace std;
class horse
{
public:
    horse()
    {
        cout << "Default Horse Galloping !\n(default constructor called)" << endl
             << endl;
    }

    horse(string name, int speed, int rating)
    {
        cout << "Horse's name is: " << name
             << "\nspeed is " << speed
             << "\nrating : " << rating << "\n (parameterised constructor called)" << endl;
    }
    horse(const horse& OGhorse){
          cout<<"Pinkerton Horse fleet created\n(copy constructor called)"<<endl;
    }
};

int main()
{
    horse chestnut; // automatically called the default constructor
    horse stallin("Aurther's horse", 70, 10);//this called the parameterised constructor
    horse pinkerton_Horse_fleet=stallin;//this called the copy constructor
    return 0;
}