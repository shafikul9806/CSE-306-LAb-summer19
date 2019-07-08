#include<iostream>
using namespace std;

#define MAX 100
char Array[MAX];
int top;

void initialize()
{
    top = -1;
}

void push(char c)
{
    if(top >= MAX-1)
    {
        cout<<"Stack Overflow" <<endl;
        cout<<"You Can Not Push A New Element"<<endl;
        return;
    }
    else
    {
        top++;
        Array[top] = c;

    }

}


void printstack()
{
    for(int i=top; i>=0; i--)
    {
        cout<<Array[i]<<" ";
    }
}

void pop()
{
    if(top <= -1)
    {
        cout<<"Stack Underflow";
    }
    else
    {
        top--;
    }
}

bool isEmpty()
{
    if(top <= -1)
    {
        return true;
    }
    else{
        return false;
    }
}

char gettop()
{
    if(isEmpty())
    {
        cout<<"The Stack Is Empty"<<endl;
    }
    else
    {
        return Array[top];
    }
}







int main()
{
    push('x');
    push('y');
    push('z');
    printstack();
    cout<<endl;
    pop();
    printstack();
    cout<<endl;
    cout<<gettop();
}
