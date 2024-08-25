#include <iostream>
#include <vector>
using namespace std;
class bank
{
private:
    int P, T;
    float R, balance=0;
public:
    bank(int x, int y, float z)// parameterised constructor
    { 
        P = x, T = y, R = z;
    }
    void bankinfo(void)
    {
        cout << "Current Balance :::: " << balance << endl;
    }
    void deposit(float x)
    {
        balance += x;
        cout << "Depositing the amount :::: " << x << endl;
        bankinfo();
    }
    void simple_Intrest()
    {
        int amount = (P * R * T) / 100;
        cout<<"Interest amount :::: "<<amount <<endl;
        balance+=amount;
        bankinfo();
    }
};
int main()
{
    bank cust1(1000, 1, 2);
    cust1.deposit(0);
    cust1.simple_Intrest();
    return 0;
}