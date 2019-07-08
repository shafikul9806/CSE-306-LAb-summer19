#include <iostream>
#include<cstddef>// in case the programm shows error for not recognizing NULL
using namespace std;

struct node{
    int data;
    node *link;
};

node *head = NULL; //head pointer is a global variable.

void INAB(int value){//INAB= INSERT NOTE AT BACK
    node *p;//p is the pointer to the node
    if(head==NULL){
        p = new node();
        head = p;
        p->data = value;
        p->link = NULL;
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

    }

}

void print()
{
    node *p = head;
    while(p->link != NULL){
        cout<< p->data << " ";
        p = p->link;
    }
    cout<< p->data;
}
int main()
{
    INAB(20);
    INAB(30);
    INAB(40);
    INAB(50);
    INAB(60);
    print();


}
