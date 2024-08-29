#include <bits/stdc++.h>
using namespace std;
const int MAX = 5;
class Queue
{
    int *arr;
    int f, r;

public:
    Queue()
    {
        arr = new int[MAX];
        f = r = -1;
    }
    Queue(int x)
    {
        arr = new int[x];
        f = r = -1;
    }
    void enqueue(int);
    int dequeue();
    bool isempty();
    bool isfull();
};
bool Queue::isfull()
{
    return r == MAX - 1;
}
bool Queue::isempty()
{
    return f == -1;
}
void Queue::enqueue(int data)
{
    if (f == -1)
    {
        f = r = 0;
        arr[r] = data;
    }
    else
    {
        if (isfull())
        {
            cout << "The Queue is full\n";
            return;
        }
        r++;
        arr[r] = data;
    }
}
int Queue::dequeue()
{
    if (isempty())
    {
        cout << "Queue is empty\n";
        return -1;
    }
    else
    {
        int dat = arr[f];
        f++;
        return dat;
    }
}
int main()
{
    // Stack s;
    // int choise;
    // do
    // {
    //     cout << "Choose option :\n";
    //     cout << "1-Push Element \n2-Pop Element\n3-Display all the element\n";
    //     cin >> choise;
    //     int x;
    //     switch (choise)
    //     {
    //     case 1:{
    //         cout << "Enter number to push \n";
    //         cin >> x;
    //         s.push(x);
    //     }
    //         break;
    //     case 2:
    //         cout << s.pop();
    //         break;
    //     case 3:{
    //         cout << "Stack elements:\n";
    //         s.display();
    //     }
    //         break;
    //     default:
    //         cout << "Exiting now...\n";
    //     }
    // } while (choise >= 1 && choise <= 3);
    // return 0;
}