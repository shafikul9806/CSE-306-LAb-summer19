#include<iostream>
using namespace std;
#define Max 100
class Stack
{
public:
    int Array[Max];
    int top;

    Stack()
    {
        top = -1;
    }
    ~Stack()
    {

    }
    void push(int element);
    void pop();
    bool isEmpty();
    int gettop();
    void printstack();
};


bool Stack::isEmpty()
{
    if(top <= -1)
    {
        return true;

    }
    else { return false;}

}

void Stack::pop()
{
    if(isEmpty())
    {
        cout<<"Stack Underflow";

        return;
    }
    else
    {
        top--;
    }

}

int Stack::gettop()
{
    if(isEmpty())
    {
        cout<<"The Stack Is Empty";
    }
    else
        return Array[top];
}


void Stack::push(int element)
{
    if(top >= Max-1)
    {
        cout<<"Stack Overflow";
    }
    else
    {
        top++;
        Array[top] = element;


    }

}

void Stack::printstack()
{
    for(int i=0; i<=top; i++)
    {
        cout<<Array[i]<<" ";

    }
}



int main()
{
    Stack s1,s2,s3;
    s1.push(4);
    s1.push(3);
    s1.push(2);
    s2.push(6);
    s2.push(8);
    s2.push(1);

    s1.printstack();
    cout<<endl;
    //s2.pop();
    s2.printstack();
    cout<<endl;
    cout<<s2.gettop();


