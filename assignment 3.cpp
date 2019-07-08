#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int Array1[MAX];
int top1;
int Array2[MAX];
int top2;
int Array3[MAX];
int top3;
void initialize1(){
    top1 = -1;
}

bool isEmpty1(){
    if(top1 <= -1)
        return true;
    return false;

}

void push1(int c){
    if(top1 >= MAX -1)
    {
        cout << "Stack Overflow" << endl;
        cout <<"You cannot push a new element into the stack" <<endl;
        return;
    }
    else
    {
        top1++;
        Array1[top1] = c;
    }
}

int getTop1(){
    if(isEmpty1())
    {
        cout << "";

    }
    else{
        //cout << "\n";
        return Array1[top1];
    }
}

void printStack1(){

    for(int i = top1; i>=0; i--)
        cout <<Array1[i] << " ";
}
void pop1(){
    if(isEmpty1())
    {
        cout <<"Stack underflow" << endl;
        cout <<"There is nothing to pop" << endl;
    }
    else
        top1--;
    //cout << endl;
}
//........................

void initialize2(){
    top2 = -1;
}

bool isEmpty2(){
    if(top2 <= -1)
        return true;
    return false;

}

void push2(int a){
    if(top2 >= MAX -1)
    {
        cout << "Stack Overflow" << endl;
        cout <<"You cannot push a new element into the stack" <<endl;
        return;
    }
    else
    {
        top2++;
        Array2[top2] = a;
    }
}

int getTop2(){
    if(isEmpty2())
    {
        cout << "The Stack is empty" << endl;

    }
    else{
        cout << "\n";
        return Array2[top2];
    }
}

void printStack2(){

    for(int i = top2; i>=0; i--)
        cout <<Array2[i] << " ";
}
void pop2(){
    if(isEmpty2())
    {
        cout <<"Stack underflow" << endl;
        cout <<"There is nothing to pop" << endl;
    }
    else
        top2--;
    //cout << endl;
}
//.......................
void initialize3(){
    top3 = -1;
}

bool isEmpty3(){
    if(top3 <= -1)
        return true;
    return false;

}

void push3(int b){
    if(top3 >= MAX -1)
    {
        cout << "Stack Overflow" << endl;
        cout <<"You cannot push a new element into the stack" <<endl;
        return;
    }
    else
    {
        top3++;
        Array3[top3] = b;
    }
}

int getTop3(){
    if(isEmpty3())
    {
        cout << "The Stack is empty" << endl;

    }
    else{
      //  cout << "\n";
        return Array3[top3];
    }
}

void printStack3(){

    for(int i = top3; i>=0; i--)
        cout <<Array3[i] << " ";
}
void pop3(){
    if(isEmpty3())
    {
        cout <<"Stack underflow" << endl;
        cout <<"There is nothing to pop" << endl;
    }
    else
        top3--;
    //cout << endl;
}
int main(){
    initialize1();
    push1(1);
    push1(2);
    push1(3);
    //printStack1();
    //cout<<endl;

    initialize2();
    push2(4);
    push2(5);
    push2(6);
    //printStack2();

    //cout<<endl;

    initialize3();
    int counter=0;
    while(top1>-1 || top2>-1)
    {
        if(getTop1()<getTop2())
        {
            push3(getTop1());
            pop1();
        }
        else
        {
            push3(getTop2());
            pop2();
        }
        counter++;
    }
    sort(Array3,Array3+counter);
    cout<<endl;
    printStack3();
}


