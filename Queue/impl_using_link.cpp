#include <bits/stdc++.h>
using namespace std;
const 

struct node{
    int data;
    node*next;
    node(){
        next=nullptr;
    }
    node(int x):data(x),next(nullptr){}
};
//note we are not considering size limitations 
class Q{
    node*front;
    node*rear;
    
    public:
    Q(){
        front=rear=nullptr;
    }
    void enqueue(int);
    int dequeue();
    void display();
};
void Q::enqueue(int data){//this is basically appending to the linkedlist
    node*temp=new node(data);
    if(front==nullptr){
        front=temp;
        rear=front;
    }else{
        rear->next=temp;
        rear=temp;
    }
}
int Q::dequeue(){
    if(front==nullptr){
        cout<<"Queue is empty\n";
        return -1;
    }else{
        node*togetridof=front;
        int data=front->data;
        front=front->next;
        delete togetridof;
        return data;
    }
}
void Q::display(){
    node*it=front;
    while(it!=nullptr ){
        cout<<it->data<<"\t";
        it=it->next;
    }
}
int main(){
    //todo
}