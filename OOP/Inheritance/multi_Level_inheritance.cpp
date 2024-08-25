#include <iostream>
#include <vector>
using namespace std;
// class result;
class student
{
protected:
    int roll;
    // friend void result::print(student &obj);
    friend class result;
public:
    student() {}
    student(int x)
    {
        roll = x;
    }
};
class exam : public student // derived class from base : student
{
protected:
    float physics, chemistry;
    friend class result;
public:
    exam() {}
    exam(float m1, float m2)
    {
        physics = m1;
        chemistry = m2;
    }
};
class result : public exam // derived class from base : (derived)exam
{
private:
    float percentage;

public:
    void res(exam obj)
    {
        percentage = (obj.physics + obj.chemistry) / 200.0;
        percentage = percentage * 100;
    }
    void print(student &obj)
    {
        cout << "Your Roll number : " << obj.roll << endl;
        cout << "Your Result is : " << percentage << "%" << endl;
    }
};
int main()
{
    student rudrakhsa(123);
    exam boards(95, 94);
    result twelfth;
    twelfth.res(boards);
    twelfth.print(rudrakhsa);
    return 0;
}