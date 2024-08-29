#include <bits/stdc++.h>
using namespace std;
const int MAX = 50;
/*
This is the implementation where the 'r' is at the end of the array
[0,0,0,0,0,0,0,0,0,0]
 f-->           <--r
 one may call this the "reverse" method
*/
class Stack
{
    int *arr;
    int f, r;

public:
    Stack()
    {
        arr = new int[MAX];
        f = -1;
        r = MAX;
    }
    Stack(int size)
    { // custom size constructor (we wont use in this implementation)
        arr = new int[size];
        f = -1;
        r = size;
    }
    void push1(int); // push in the stack that pops from front of array 'arr'
    void push2(int); // push in the stack that pops from last of array 'arr'
    void display1();
    void display2();
    bool isempty1();
    bool isempty2();
    bool isfull1();
    bool isfull2();
    int pop1();
    int pop2();
};
bool Stack::isfull1()
{
    return f == r - 1; // change max to size if needed (add class member)
}
bool Stack::isempty1()
{
    return f == -1;
}
bool Stack::isfull2()
{
    return r == f + 1; // change max to size if needed (add class member)
}
bool Stack::isempty2()
{
    return r == MAX;
}
void Stack::push1(int data)
{
    if (isfull1())
    {
        cout << "Stack Overflow\n";
        return;
    }
    f++;
    arr[f] = data;
}
int Stack::pop1()
{
    if (isempty1())
    {
        cout << "Stack Underflow\n";
        return -1;
    }
    int data = arr[f];
    f--;
    return data;
}
void Stack::push2(int data)
{
    if (isfull2())
    {
        cout << "Stack Overflow\n";
        return;
    }
    r--;
    arr[r] = data;
}
int Stack::pop2()
{
    if (isempty2())
    {
        cout << "Stack Underflow\n";
        return -1;
    }
    int data = arr[r];
    r++;
    return data;
}
void Stack::display1(){
    if(isempty1()){
        cout<<"Stack 1 is empty\n";
        return;
    }
    for(int i=f;i>=0;i--){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
void Stack::display2(){
    if(isempty2()){
        cout<<"Stack 2 is empty\n";
        return;
    }
    for(int i=r;i<MAX;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
int main()
{
    Stack s;
    int choise;
    do
    {
        cout << "Choose option :\n";
        cout << "1-Push Element to stack 1\n2-Pop Element from stack 1\n3-Push Element to stack 2\n4-Pop Element from stack 2"<<endl;
        cout<<"5-Display Stack1\n 6-Display Stack2"<<endl;
        cin >> choise;
        int x;
        switch (choise)
        {
        case 1:
        {
            cout << "Enter number to push to stack2\n";
            cin >> x;
            s.push1(x);
        }
        break;
        case 2:
            cout << s.pop1() << endl;
            break;
        case 3:
        {
            cout << "Enter number to push to stack2\n";
            cin >> x;
            s.push2(x);
        }
        break;
        case 4:
            cout << s.pop2() << endl;
            break;
        case 5:
            s.display1();
            break;
        case 6:
            s.display2();
            break;
        default:
            cout << "Exiting now...\n";
        }
    } while (choise >= 1 && choise <= 6);

    return 0;
}