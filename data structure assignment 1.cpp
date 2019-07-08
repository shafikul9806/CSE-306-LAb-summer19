#include<iostream>
#include <cstddef>
using namespace std;

struct node{
    int data;
    node *link;
};
node *head = NULL; // head pointer
                // is a global
                //variable
void InsertNodeAtBack(){
    int value;
    cout<<"What Number You Want To Add: ";
    cin>>value;
    node *p; // p is pointer to the node
    if(head == NULL){// About to create

        p = new node();//the first node
        head = p;
        p->data = value;
        p->link = NULL;
        cout<<endl;
    }
    else
    {
        p = new node();
        p->data = value;
        p->link = NULL;
        node *temp = head;
        while(temp->link != NULL){
            temp = temp->link;
        }
        temp->link = p;
        cout<<endl;
    }

}

void InsertNodeAtFront(){
    int value;
    cout<<"What Number You Want To Add: ";
    cin>>value;
    node *p = new node();
    p->data = value;
    p->link = head;
    head = p;
    cout<<endl;

}


void Print(){
    // This prints all the data in the
    // linked list

    node *p = head;
    while(p->link != NULL){
        cout << p->data << " ";
        p = p->link;
    }
    cout << p->data << endl;
}


void Sort()
{
    node *currentpointer;
    node *temp;
    if(head == NULL)
    {
        cout<<"There Are No Nodes In The Linked List";
    }
    else if(head->link == NULL)
    {
        cout<<"There Is Only One Node In The Link List!!";
    }
    else
    {
        for(currentpointer = head; currentpointer->link != NULL; currentpointer = currentpointer->link)
        {
            for(temp = currentpointer->link; temp != NULL; temp=temp->link)
            {
                if(currentpointer->data > temp->data)
                {
                    int x;
                    x = currentpointer->data;
                    currentpointer->data = temp->data;
                    temp->data = x;
                }
            }
        }
        cout<<"The Link LIst Now Sorted In Ascended Order!"<<endl;
    }

}



int main()
{
    InsertNodeAtFront();
    InsertNodeAtBack();
    InsertNodeAtFront();
    InsertNodeAtBack();
    InsertNodeAtFront();
    InsertNodeAtBack();
    InsertNodeAtFront();
    InsertNodeAtBack();
    InsertNodeAtFront();
    InsertNodeAtBack();
    cout<<endl;
    Print();
    cout<<endl;
    Sort();
    cout<<endl;
    Print();


}






