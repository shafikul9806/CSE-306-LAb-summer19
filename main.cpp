#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

node *head=NULL;
node *tail=NULL;

void addnodeatfront(int value)
{

    node *p=new node();
    p->data = value;
    p->next = head;
    p->prev = NULL;
    if(head == NULL)
    {
       tail = p;
    }
    head = p;
    if(head->next != NULL)
    {
        node *q = head->next;
        q->prev = head;
    }
}

void addnodeatback(int value)
{

    if(head == NULL)
    {
        addnodeatfront(value);
    }
    else
    {
            node *p = new node();
            p->data = value;
            p->next = NULL;

            tail->next = p;
            p->prev = tail;
            tail = p;

    }

}
void Print()
{
    node *p = head;
    while(p->next != NULL)
    {
        cout<<p->data<<"  ";
        p = p->next;
    }
    cout<<p->data;
}

void ReversePrint()
{
    node *p = tail;
    while(p->prev != NULL)
    {
        cout<<p->data<<"  ";
        p = p->prev;
    }
}

int getnumberofnodes()
{
    node *p=head;
    int c = 0;
    while(p->next != NULL)
    {
        c++;
        p=p->next;
    }
    c++;
    return c;
}

double average()
{
    node *p = head;
    int sum=0;
    while(p->next != NULL)
    {
        sum = sum + p->data;
        p=p->next;
    }
     sum = sum + p->data;
    return (sum*1.0/getnumberofnodes());
}

void deletenode(int x)
{

    node *p = head;
    node *q = head->next;
    int c;
    if(x==1)
    {
        head = q;
        delete p;
    }
    else
    {
        for(c=2;c<x;c++)
        {
           p=p->next;
           q=q->next;
        }
        p->next=q->next;
        p=q;
        p->prev=q->prev;
        delete q;
    }
}
int main()
{
    addnodeatfront(6);
    addnodeatfront(4);
    addnodeatfront(2);
    addnodeatback(8);
    addnodeatback(9);
    Print();
    cout<<endl;
    ReversePrint();
    cout<<endl;
    cout<<getnumberofnodes()<<endl;
    cout<<average();
    cout<<endl;
    deletenode(1);
    Print();


}
