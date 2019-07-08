#include <iostream>
#include <cstddef>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

node *head=NULL;
node *tail=NULL;

void addnodeatfront()
{
    int value;
    cout<<"What Number You Want To Add: ";
    cin>>value;

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

void addnodeatback()
{
    int value;
    cout<<"What Number You Want To Add: ";
    cin>>value;

    if(head == NULL)
    {
        addnodeatfront();
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

void deletenode()
{
    int x;
    cout<<"Which Node You Want To Delete: ";
    cin>>x;

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



void Action()
{
    node *p = head;

    while(p->next != NULL)
    {
        int a;
        cout<<"Press 1 to Insert Node, 2 to Delete Node or 3 to go to next Node";
        cin>>a;
        if(a==1)
        {
            int b;
            cout<<"Press 1 to add node at front or 2 to add node at back";
            if(b == 1)
            {
                int value;
                cout<<"What Number You Want To Add: ";
                cin>>value;

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

                Print();

            }
            else
            {
                int value;
                cout<<"What Number You Want To Add: ";
                cin>>value;
                node *p = new node();
                p->data = value;
                p->next = NULL;
                tail->next = p;
                p->prev = tail;
                tail = p;
                Print();
                p = p->next;
            }
        }


        else if(a==2)
        {
            deletenode();
            Print();
            p = p->next;
        }
        else
        {
            p = p->next;

        }

    }
  }






int main()
{
    addnodeatfront();
    addnodeatback();
    addnodeatfront();
    addnodeatback();
    addnodeatfront();
    addnodeatback();
    Print();
    cout<<endl;
    Action();
}
