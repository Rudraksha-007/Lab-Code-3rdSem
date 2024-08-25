#include <bits/stdc++.h>
using namespace std;

const int MAX = 50;
class Queue
{
    int arr[MAX];
    int top;

public:
    Queue()
    {
        top = -1;
        for (int i : arr)
        {
            i = 0;
        }
    }
};

// int main()
// {
//     Stack s;
//     int choise;
//     do{
//         cout<<"Choose option :\n";
//         cout<<"1-Push Element \n2-Pop Element\n3-Display all the element\n";
//         cin>>choise;
//         int x;
//         switch(choise){
//             case 1:cout<<"Enter number to push \n";cin>>x; s.Push(x);break;
//             case 2:cout<<s.Pop();break;
//             case 3:cout<<"Stack elements:\n";s.display();break;
//             default:
//             cout<<"Fatal error\n";
//         }
//     }while (choise >= 1 && choise <= 3);
//     return 0;
// }
