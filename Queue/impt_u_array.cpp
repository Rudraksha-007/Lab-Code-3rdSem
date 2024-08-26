#include <bits/stdc++.h>
using namespace std;

const int MAX = 50;
class Queue
{
    int arr[MAX];
    int r,f;

public:
    Queue()
    {
        f=r=-1;

    }
    void enqueue(int);
    int deque();
    void display();
    bool isfull();
};

void Queue::enqueue(int x){
    if(f==-1){
        f=r=0;
        arr[r]=x;
    }else{
        if(isfull()){
            cout<<"Queue is full\n";
        }
        r++;
        arr[r]=x;
    }
}
int Queue::deque(){
    if(f==-1){
        cout<<"Queue is empty.\n";
        return -1;
    }else{
        if(f>=r){
            f=-1;
            r=-1;
        }
        int data=arr[f];
        f++;
        return data;
    }
}
void Queue:: display(){
    for(int i=f;i<=r;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
bool Queue::isfull(){
    return r==MAX-1;
}
int main()
{
    Queue q;
    int choise;
    do{
        cout<<"Choose option :\n";
        cout<<"1-Add Element \n2-Remove Element\n3-Display all the elements\n";
        cin>>choise;
        int x;
        switch(choise){
            case 1:cout<<"Enter number to push \n";cin>>x; q.enqueue(x);break;
            case 2:cout<<q.deque();break;
            case 3:cout<<"Queue elements:\n";q.display();break;
            default:
            cout<<"Exiting...\n";
        }
    }while (choise >= 1 && choise <= 3);
    return 0;
}