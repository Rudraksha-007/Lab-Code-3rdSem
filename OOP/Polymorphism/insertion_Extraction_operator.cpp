#include <iostream>
#include <vector>
using namespace std;
class test
{
private:
    int x;
    // friend class ostream;
    // friend class istream;
public:
    test(int x = 0) : x(x) {}
    friend void operator>>(istream &, test &);
    friend ostream &operator<<(ostream &, test);
};
void operator>>(istream &ip, test &obj)
{
    ip >> obj.x;
}//does not reutrn cin so this makes it un-usable 
//to process statements like cin>>x>>t; and so on.
ostream &operator<<(ostream &op, test obj)
{
    op << obj.x << endl;
    return op;
}

int main()
{
    test c;
    // cin >> c;
    operator>>(cin, c);
    // cout << c;
    operator<<(cout,c);
    return 0;
}