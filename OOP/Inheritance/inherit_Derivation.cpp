#include<iostream>
#include<vector>
using namespace std;
class base {
    private: 
     int mydata=50;
    protected:
     int value=0;
    public:
     int all=100;
};
class derivedp: private base{//private derivation
  public:
  void print(){
  cout<<all<<endl;
  }
}; 
class derivedP: public base{//public derivation 
  public:
  void print(){
  cout<<all<<endl;
  }
};
class derivedpr: protected base{//protected derivation 
  public:
  void print(){
  cout<<all<<endl;
  }
};


int main(){
    derivedp x;
    // cout<<x.all<<endl; 
    base c;
    derivedP b;
    derivedpr v;
    cout<<b.all<<endl;
    cout<<c.all<<endl;
    // cout<<v.all<<endl;
    return 0;
}