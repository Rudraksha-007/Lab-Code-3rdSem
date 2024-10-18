#include <iostream>
using namespace std;
struct node
{
    int coeff, pow;
    node *next;
};
class polynomial
{
public:
    node *start;
    polynomial() { start = NULL; }
    void readpoly();
    void displaypoly();
};
void polynomial::readpoly()
{
    int coeff, pow;
    char c;
    node *oldnode = NULL;
    do
    {
        cout << "enter coeff and power:";
        cin >> coeff >> pow;

        node *nn = new node();
        nn->coeff = coeff;
        nn->pow = pow;
        nn->next = NULL;

        if (start == NULL)
        {
            start = nn;
        }
        else
        {
            oldnode->next = nn;
        }
        oldnode = nn;
        cout << "add more elements?";
        cin >> c;
    } while (c == 'y');
}
void polynomial::displaypoly()
{
    node *t = start;
    while (t!=NULL)
    {
        cout << t->coeff << "x^" << t->pow;
        t = t->next;
        if (t!=nullptr and t->coeff >= 0)
        {
            cout << "+";
        }
    }
}
static polynomial addpoly(polynomial &p1, polynomial &p2)
{
    polynomial result;
    node*ptr1=p1.start;
    node*ptr2=p2.start;
    node*ptr3=nullptr;
    while(ptr1!=nullptr or ptr2!=nullptr){
        node*nn=new node();
        nn->next=NULL;
        if(ptr1==NULL){
            nn->coeff=ptr2->coeff;
            nn->pow=ptr2->pow;
            ptr2=ptr2->next;
        }   
        else if(ptr2==NULL){
            nn->coeff=ptr1->coeff;
            nn->pow=ptr1->pow;
            ptr1=ptr1->next;
        }
        else if(ptr1->pow==ptr2->pow){
            nn->coeff=ptr1->coeff+ptr2->coeff;
            nn->pow=ptr1->pow;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        else if(ptr1->pow > ptr2->pow){
            nn->coeff=ptr1->coeff;
            nn->pow=ptr1->pow;
            ptr1=ptr1->next;
        }else{
            nn->coeff=ptr2->coeff;  
            nn->pow=ptr2->pow;
            ptr2=ptr2->next;
        }
        if(result.start==NULL){
            result.start=nn;
        }
        else{
            ptr3->next=nn;
        }
        ptr3=nn;
    }
    return result;
}

int main()
{
    polynomial p1, p2, result;

    cout << "Enter first polynomial:\n";
    p1.readpoly();
    cout << "First polynomial: ";
    p1.displaypoly();
    cout << "Enter second polynomial:\n";
    p2.readpoly();
    cout << "Second polynomial: ";
    p2.displaypoly();
    cout<<endl;
    result = addpoly(p1, p2);
    cout << "Resulting polynomial: ";
    result.displaypoly();

    return 0;
}