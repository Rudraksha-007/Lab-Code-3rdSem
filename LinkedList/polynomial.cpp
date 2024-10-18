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
        if (t->coeff >= 0)
        {
            cout << "+";
        }
    }
}
static polynomial addpoly(polynomial &p1, polynomial &p2)
{
    polynomial result;
    node *p1current = p1.start;
    node *p2current = p2.start;
    node *resulthead = NULL;
    node *resulttail = NULL;
    while (p1current || p2current)
    {
        int coeff = 0, pow = 0;
        if (p1current && (!p2current || p1current->pow > p2current->pow))
        {
            coeff = p1current->coeff;
            pow = p1current->pow;
            p1current = p1current->next;
        }
        else if (p1current && p2current && p1current->pow == p2current->pow)
        {
            coeff = p1current->coeff + p2current->coeff;
            pow = p1current->pow + p2current->pow;
            p1current = p1current->next;
            p2current = p2current->next;
        }
        else
        {
            if (p2current && (!p1current || p2current->pow > p1current->pow))
            {
                coeff = p2current->coeff;
                pow = p2current->pow;
                p2current = p2current->next;
            }
        }
        node *newnode = new node();
        newnode->coeff = coeff;
        newnode->pow = pow;
        newnode->next = NULL;
        if (resulthead == NULL)
        {
            resulthead = newnode;
            resulttail = newnode;
        }
        else
        {
            resulttail->next = newnode;
            resulttail = newnode;
        }
    }
    resulttail->next = NULL;
    result.start = resulthead;
    return result;
}

int main()
{
    polynomial p1, p2, result;

    // cout << "Enter first polynomial:\n";
    p1.readpoly();
    cout << endl;
    p1.displaypoly();
    // cout << "First polynomial: ";
    // p1.displaypoly();
    // cout << "Enter second polynomial:\n";
    // p2.readpoly();
    // cout << "Second polynomial: ";
    // p2.displaypoly();
    // cout<<endl;
    // result = addpoly(p1, p2);
    // cout << "Resulting polynomial: ";
    // result.displaypoly();

    return 0;
}