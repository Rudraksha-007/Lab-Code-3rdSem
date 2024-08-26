#include <bits/stdc++.h>
using namespace std;

const int MAX = 50; 
struct node{
    int data;
    node*next;
    node(int x){
        data=x;
        next=nullptr;
    }
};
class List{
    node *head;
    public:
    List(){
        head->next=nullptr;
    }    
    List(int x){
        head=new node(x);
    }
    void display();
    void append(int);
    void addAtbeg(int);
    void addAt(int,int);
    int count();
};
void List::append(int x){
    node*temp= new node(x);
    if(head==nullptr){
        head=temp;
    }
    else{
        node*iterator=head;
        while(iterator->next!=nullptr){
            iterator=iterator->next;
        }   
        iterator->next=temp;
    }
}
void List::display(){
    node*iterator=head;
    if(iterator==nullptr){
        cout<<"The list is empty\n";
    }else{
        while(iterator!=nullptr){
            cout<<iterator->data<<"\t";
            iterator = iterator->next;
        }
        cout<<endl;
    }
}

int main()
{
    // int choise;
    // List l;
    // do{
    //     cout<<"Choose option :\n";
    //     cout<<"1-Add item \n2-Remove item\n3-Display all the items\n";
        
    //     cin>>choise;
    //     int x;
    //     switch(choise){
    //         case 1:q.enqueue(takeInputforItemtoAdd());break;
    //         case 2:printAnitem(q.dequeue());break;
    //         case 3:q.display();break;
    //         default:
    //         cout<<"Exiting...\n";
    //     }
    // }while (choise >= 1 && choise <= 3);
    return 0;
}