#include<iostream>
using namespace std;
#define MAX 100
class Stack{
    private: char Array[MAX];
             int top;
    public:
             Stack(){
                top = -1;
             }
             ~Stack(){

             }
             void push(char element);
             void pop();
             bool isEmpty();
             char getTop();
             void printStack();
};

bool Stack::isEmpty(){
    if(top <= -1)
        return true;
    return false;
}

void Stack:: printStack(){
    cout << endl;
    for(int i = top; i>=0; i--)
    {

        cout << Array[i] << " ";
    }
}

void Stack::pop(){
    if(isEmpty()){
        cout <<"\nStack underflow";
        cout <<"\nThere is nothing to pop";
        return;
    }
    else
        top--;
}

char Stack:: getTop(){
    if(isEmpty()){
        cout <<"\nThe Stack is Empty" << endl;
    }
    else
        return Array[top];
}

void Stack:: push(char element){
    if(top >=MAX - 1){
        cout <<"\nStack overflow\nUnable to Push" << endl;
    }
    else{
        top++;
        Array[top] = element;
    }
}

int main(){
    Stack s;
    char input[20];
    cout<<"enter a string";
    cin>>input;
    cout<<"/n"<<input;

    int a=0;
    char c;
    for(int i=0; input!='\0'; i++)
    {
        c = input[i];
        if(c =='{')
            {
                a++;
                s.push('y');

            }
        else if(c =='(')
        {
            a++;
            s.push('x');

        }
        else if(c ==')')
        {
            if(s.getTop()=='x')
            {
                a--;
              s.pop();

            }


        }
        else if(c =='}')
        {
            if(s.getTop()=='y')
            {
                a--;
                s.pop();
            }


        }
    }

    if(a==0)
    {
        cout<<"/nTheParenthesis Is Valid";
    }
    else
    {
         cout<<"/nTheParenthesis Is Not Valid";
    }



    /*
    s.push('X');
    s.push('Y');
    s.push('Z');

    s.printStack();
    s.pop();
    s.printStack();
*/
}



