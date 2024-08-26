#include <bits/stdc++.h>
using namespace std;

const int MAX = 50;
class Queue
{
    int *arr;
    int f,cap,size;

public:
    Queue(int x)
    {
        cap=x;
        arr=new int[cap];
        size=0;
        f=0;
    }
    void enqueue(int);
    void display();
    int deque();
    int getrear();
    int getfront();
    bool isfull();
    bool isempty();
};
bool Queue::isempty(){
    return size==0;
}
int Queue::getrear(){
    if(isempty()){
        return -1;
    }else{
        return (size+f-1)%cap;
    }
}

void Queue::enqueue(int x){
    if(isfull()){
        cout<<"Queue is full.\n";
    }else{
        int rear=getrear();
        rear=(rear+1)%cap;
        arr[rear]=x;
        size++;
    }
}
int Queue::deque(){
    if(isempty()){
        cout<<"Queue is empty.\n";
        return -1;
    }else{
        int data=arr[f];
        f=(f+1)%cap;
        size--;
        return data;
    }
}
void Queue:: display(){
    if(isempty()){
        cout<<"Queue is empty.\n";
        return;
    }
    int rear=getrear();
    if(f>=rear){
        for(int i=0;i<=rear;i++){
            cout<<arr[i]<<"\t";
        }
        for(int i=f;i<size;i++){
            cout<<arr[i]<<"\t";
        }
    }
    else{
        for(int i=f;i<=rear;i++){
            cout<<arr[i]<<"\t";
        }
    }
    cout<<endl;
}
bool Queue::isfull(){
    return cap==size;
}
int main()
{
    int choise;
    int x;
    cout<<"Enter the size of queue\n";
    cin>>x;
    Queue q(x);
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