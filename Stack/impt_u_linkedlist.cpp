#include <bits/stdc++.h>
using namespace std;
const int MAX = 50;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = nullptr;
    }
};
class List
{
    node *head;

public:
    List()
    {
        head = nullptr;
    }
    List(int x)
    {
        head = new node(x);
    }
    void display();
    void append(int);
    void addAtbeg(int);
    void addAt(int, int);
    void deleteAt(int);
    int count();

    ~List()
    {
        delete head;
    }
};
int List::count()
{
    node *curr = head;
    uint32_t count = 0;
    while (curr != nullptr)
    {
        count++;
        curr = curr->next;
    }
    return count;
}
void List ::addAtbeg(int x)
{
    node *temp = new node(x);
    if (head == nullptr)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}
void List::addAt(int data, int pos)
{ // assuming 'pos' is 1 indexed.
    // and also assuming that 'pos' is a valid input
    if (pos == 1)
    {
        addAtbeg(data);
    }
    else if (pos == count())
    {
        append(data);
    }
    else if (pos < count())
    {
        int count = 1;
        node *it = head;
        node *temp = new node(data);
        while (it->next != nullptr and count < pos - 1)
        {
            it = it->next;
            count++;
        }
        temp->next = it->next;
        it->next = temp;
    }
}
void List::append(int x)
{
    node *temp = new node(x);
    if (head == nullptr)
    {
        head = temp;
    }
    else
    {
        node *iterator = head;
        while (iterator->next != nullptr)
        {
            iterator = iterator->next;
        }
        iterator->next = temp;
    }
}
void List::display()
{
    node *iterator = head;
    if (iterator == nullptr)
    {
        cout << "The list is empty\n";
    }
    else
    {
        while (iterator != nullptr)
        {
            cout << (iterator->data) << "\t";
            iterator = iterator->next;
        }
        cout << endl;
    }
}
void List::deleteAt(int pos)
{ // again assuming that pos is 1 indexed and is valid
    if (pos == 1)
    {
        node *todelete = head;
        head = head->next;
        delete todelete;
    }
    else if (pos == count())
    {
        node *it = head;
        node *prev = nullptr;
        while (it->next != nullptr)
        {
            prev = it;
            it = it->next;
        }
        prev->next = nullptr;
        delete it;
    }
    else
    {
        int count = 1;
        node *it = head;
        while (it != nullptr and count < pos - 1)
        {
            it = it->next;
            count++;
        }
        node *nxt = it->next;
        it->next = nxt->next;
        delete nxt;
    }
}

class Stack
{
    node *head;

public:
    Stack()
    {
        head = nullptr;
    }
    void push(int);
    int pop();
    void display();
};
void Stack::push(int data)
{
    node *temp = new node(data);
    if (head == nullptr)
    {
        head = temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}
int Stack::pop()
{
    if (head == nullptr)
    {
        cout << "Stack underflow\n";
        return -1;
    }
    else
    {
        int dat;
        node *it = head;
        node *prev = head;
        while (it->next != nullptr)
        {
            prev = it;
            it = it->next;
        }
        prev->next = nullptr;
        dat = it->data;
        delete it;
        return dat;
    }
}
void Stack ::display()
{
    if (head == nullptr)
    {
        cout << "Stack is empty\n";
        return;
    }
    node *it = head;
    while (it != nullptr)
    {
        cout << (it->data) << "\t";
        it = it->next;
    }
    cout << endl;
}
int main()
{
    Stack s;
    int choise;
    do
    {
        cout << "Choose option :\n";
        cout << "1-Push Element \n2-Pop Element\n3-Display all the element\n";
        cin >> choise;
        int x;
        switch (choise)
        {
        case 1:{
            cout << "Enter number to push \n";
            cin >> x;
            s.push(x);
        }
            break;
        case 2:
            cout << s.pop();
            break;
        case 3:{
            cout << "Stack elements:\n";
            s.display();
        }
            break;
        default:
            cout << "Exiting now...\n";
        }
    } while (choise >= 1 && choise <= 3);
    return 0;
}