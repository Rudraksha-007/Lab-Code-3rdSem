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
    int count();
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
//and also assuming that 'pos' is a valid input
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
        while (it->next != nullptr and count < pos-1)
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

int main()
{
    int choise;
    List l;

    do
    {
        cout << "Choose option :\n";
        cout << "1-Append to list \n2-Add at a position\n3-Display all the items\n4-Add at the beg.";
        cout << endl;
        cin >> choise;
        switch (choise)
        {
        case 1:
        {
            int x;
            cout << "Enter data to append\n";
            cin >> x;
            l.append(x);
        }
        break;
        case 2:
        {
            int p, d;
            cout << "Enter position to add the element\n";
            cin >> p;
            cout << "Enter data to add the element\n";
            cin >> d;
            l.addAt(d, p);
        }
        break;
        case 3:
            l.display();
            break;
        case 4:
            int z;
            cout << "Enter data to add at the beg.\n";
            cin >> z;
            l.addAtbeg(z);
            break;
        default:
            cout << "Exiting...\n";
        }
    } while (choise >= 1 && choise <= 4);
    return 0;
}