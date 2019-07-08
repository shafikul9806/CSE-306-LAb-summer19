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
    if(head == NULL){ // About to create
                      //the first node
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

void InsertNodeAtFront(){
    int value;
    cout<<"What Number You Want To Add: ";
    cin>>value;
    node *p = new node();
    p->data = value;
    p->link = head;
    head = p;

}
bool search(int value){
    node *temp = head;
    while(temp->link != NULL){

        if(temp->data == value)
            return true;
        temp = temp->link;
    }
    if(temp->data == value)
        return true;
    return false;

}

int getNumberOfNodes(){
    int counter = 0;
    node *temp = head;
    if(head == NULL)
        return 0;

    while(temp->link != NULL){

        temp = temp->link;
        counter++;

    }
    //counter++;
    return (++counter);

}

void deleteFirstNode(){
    node *p = head;
    head = head->link; // fix up link
    delete p;          // free up the space
}

void deleteLastNode(){
    node *cptr = head;
    node *nptr = head->link;
    while(nptr->link != NULL){

        cptr = cptr->link;
        nptr = nptr->link;
    }
    delete nptr;
    cptr->link = NULL;

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

void deletenode()
{
    int x;
    cout<<"Which You Want To Delete: ";
    cin>>x;
    node *cp = head;
    node *np = head->link;
    int c;
    if (x==1)
    {
        head = cp->link;
        delete cp;
    }
    else
    {
        for(c=2;c < x;c++)
      {
        cp = cp->link;
        np = np->link;
      }
    cp->link = np->link;
    delete np;
    }
}

void addnode()
{
    int y;
    cout<<"Where You Want To Add A Node: ";
    cin>>y;
    node *p = head;
    node *temp;

    int c,z;
    cout<<"What Number You Want To Enter: ";
    cin>>z;
    if(y==1)
   {
       temp = new node();
       temp->data = z;
       temp->link = head;
       head = temp;
   }
   else {
    for(c=2; c<y;c++)
    {
        p = p->link;
    }

        temp = new node();
        temp->data = z;
        temp->link = p->link;
        p->link = temp;
   }
}

void Sort()
{
    node *currentpointer;
    node *temp;
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

}



int main(){
    InsertNodeAtBack();
    InsertNodeAtBack();
    InsertNodeAtBack();
    InsertNodeAtBack();
    InsertNodeAtFront();
    Print();
    cout << endl;
    int a;
    cout<<"What Number You Want To Find: ";
    cin>>a;
    if(search(a))
        cout << "Found!" << endl;
    else
        cout << "Not Found" << endl;
    cout <<"Number of Nodes = " << getNumberOfNodes() << endl;

    //deleteFirstNode();
    //Print();
    //deleteLastNode();
    //Print();
    //deleteLastNode();
    //Print();
    //deletenode();
    //Print();
    //addnode();
    //Print();
    Sort();
    Print();


}






