#include<iostream>
#include<cstddef>
using namespace std;

struct node{
    int data;
    node *link;
};
node *head = NULL;

void InsertNode(){
    int value;
    cout<<"What Number You Want To Add: ";
    cin>>value;
    node *p;
    if(head == NULL){

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



void Print(){

    node *p = head;
    while(p->link != NULL){
        cout << p->data << " ";
        p = p->link;
    }
    cout << p->data << endl;
}

void operation()
{
    int a;
    cout<<"Press 1 to Insert a node or Press 2 to Delete a node: ";
    cin>>a;

    if(a==1){

       addnode();
       Print();
    }
    else if(a==2){

        deletenode();
        Print();
    }
    else{

        cout<<"ERROR!!! Press 1 or 2 to conduct operation";
    }
}


int main()
{
    InsertNode();
    InsertNode();
    InsertNode();
    InsertNode();
    InsertNode();
    Print();
    operation();
    while(1)
    {
        cout<<"Do you want to Insert or Delete again??"<<endl;
        cout<<"Press 1 to Yes and 2 to No: ";
        int x;
        cin>>x;
        if (x==1)
        {
          operation();
        }
        else {

          cout<<"THANK YOU!!!";
          break;
        }
    }


}


