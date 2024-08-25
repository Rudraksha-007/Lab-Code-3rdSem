#include <iostream>
#include <vector>
using namespace std;
class num
{
public:
    num()
    {
        cout << "Constructor was called\n";
    }
    ~num()
    {
        cout << "Destroyer of the world is called\n";
    }
};
main()
{
    cout << "We are in main function\n";
    cout << "creating a object called n1" << endl;
    num n1;
    {
        cout << "Entering this block after n1" << endl;
        cout << "creating annother two object called n2,n3" << endl;
        num n2, n3;
        cout << "Exiting this block now !" << endl;
    }
    return 0;
}