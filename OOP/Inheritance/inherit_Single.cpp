#include<iostream>
#include<vector>
using namespace std;
//base class
class base{
    int b=40;
    private:
    int data1;
    public:
     int data2;
     void setData();
     int getdata1();
     int getdata2();
};
void base :: setData(){
     data1=10;
     data2=20;
}
int base :: getdata1(){
    return data1;
}
int base :: getdata2(){
    return data2;
}

//derived class
//inherits from base class all the public members of base are now also for derived
class Derived: public base{
      public:
      void display();
};
void Derived::display(){
   cout<<"The value of Data1 : "<<getdata1()<<endl;
   cout<<"The value of Data2 : "<<getdata2()<<endl;

}
int main(){
    Derived der;
    der.setData();
    cout<<der.data2<<endl;
    // cout<<der.data1<<endl;
    der.display();
    base obj;
    // cout<<obj.b;
    return 0;
}