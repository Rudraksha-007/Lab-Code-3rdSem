#include <bits/stdc++.h>
using namespace std;

const int MAX = 50; 
struct item{
    int data,priority;
};
class Queue
{
    item *arr;
    int f,r,size;

public:
    Queue()
    {
        r=f=-1;
        size=MAX;
        arr=new item[MAX];
    }Queue(int x)
    {
        f=0;r=-1;
        size=x;
        arr=new item[size];
    }
    void enqueue(item);
    void display();
    void Sort();
    item dequeue();
    bool isfull();
    bool isempty();
    ~Queue() {
        delete[] arr;
    }
};
void printAnitem(item x);
void Queue::display(){
    for(int i=0;i<size;i++){
        cout<<arr[i].data<<"\t";
    }
}
bool Queue::isempty(){
    return f==-1;
}
bool Queue::isfull(){
    return r==MAX-1;
}
void Queue::enqueue(item x){
    if(isfull()){
        cout<<"Queue is full.\n";
    }
    if (isempty()) {
        f = 0;
    }
    r++;
    arr[r]=x;
    Sort();
}
void Queue::Sort(){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i].priority>arr[j].priority){
                swap(arr[i],arr[j]);
            }
            else if(arr[i].priority==arr[j].priority){
                if(arr[i].data>arr[j].data){
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
}
item Queue::dequeue(){
    if(isempty()){
        cout<<"Queue is Empty.\n";
        
    }else{
        item data=arr[f];
        f++;
        return data;
    }
}
item takeInputforItemtoAdd(){
    item x;
    cout<<"Enter the Data: \n";
    cin>>x.data;
    cout<<"Enter the priority(the higher the number higher the priority): \n";
    cin>>x.priority;
    return x;
}
void printAnitem(item x){
    cout<<"Data:"<<x.data<<endl;
    cout<<"Priority:"<<x.priority<<endl;
}
int main()
{
    int choise,x;
    cout<<"Enter the Size of Priority Queue\n";
    cin>>x;
    Queue q(x);
    do{
        cout<<"Choose option :\n";
        cout<<"1-Add item \n2-Remove item\n3-Display all the items\n";
        
        cin>>choise;
        int x;
        switch(choise){
            case 1:q.enqueue(takeInputforItemtoAdd());break;
            case 2:printAnitem(q.dequeue());break;
            case 3:q.display();break;
            default:
            cout<<"Exiting...\n";
        }
    }while (choise >= 1 && choise <= 3);
    return 0;
}