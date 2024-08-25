#include <iostream>
#include <vector>
using namespace std;
class student
{
protected:
    int roll;

public:
    void setroll(int ip = 0){ roll=ip;}
    void print()
    {
        cout << "Your roll number is : " << roll << endl;
    }   
};
class test : virtual public student
{
protected:
    float chemistry, physics;

public:
    void testmark(int ip=0,int ic=0){
       physics=ip;
       chemistry=ic;
    }
    void printMarks()
    {
        cout << "Physics : "
             << physics << endl
             << "Chemistry : " << chemistry
             << endl;
    }
};
class sports : public virtual student
{
protected:
    int PE;

public:
    void setmark(int c = 0) {PE=c;}
    void printmark()
    {
        cout << "P.E. : "
             << PE << endl;
    }
};
class result : public sports, public test
{
private:
    float percentage;

public:
    void calculate()
    {
        percentage = (physics + chemistry + PE) / 300;
        percentage = percentage * 100;
    }
    void print_Result()
    {
        print();
        printmark();
        printMarks();
        cout << "Your result is : "
             << percentage << "%" << endl;
    }
};
int main()
{
    result rud;
    rud.setroll(48);
    rud.setmark(82);
    rud.testmark(95,94);
    rud.calculate();
    rud.print_Result();
    return 0;
}