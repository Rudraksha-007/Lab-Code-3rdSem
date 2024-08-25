#include<iostream>
#include<vector>
using namespace std;
class base1{
    int x;
    public:
    void say(){
        cout<<"hello"<<endl;
    }
};
class base2{
    public:
    void say(int x){
        cout<<x<<endl;
    }
};
class derived:public base1,public base2{
     int a;
     public:
        void say(){
            base1::say();
        }
};
class A{
    public:
    void say(){
       cout<<"Hola"<<endl;
    }
};
class d:public A{
    public:
    void say(){
        cout<<"Overruled."<<endl;
    }
};
int main(){
    // base1 c;
    // base2 v;
    // derived b;
    // // int c=10;
    // b.say();
    d v;
    v.say();
    return 0;
}