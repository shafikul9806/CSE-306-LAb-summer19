#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

const int Size=100;
int somearray[Size];

void generaterandomvalue()
{
    srand(time(NULL));
    for(int i = 0; i<Size; i++){
        somearray[i] = rand()%101;
    }
}

void print()
{
    for(int i = 0; i<Size; i++){
        cout<< somearray[i] <<endl;
    }
}

double getmean()
{
    int sum=0;
    for(int i=0; i<Size; i++)
    {
        sum += somearray[i];
        return(sum*1.0/Size);
    }

}

void getmode()
{
    //second assignment

}

int getmax()
{
   int Max=-1;
   for(int i=0; i<Size; i++)
   {
       if(Max<somearray[i]){
       Max = somearray[i];
       }
   }
       return Max;


}

int getmin()
{
    int Min = 101;
    for(int i=0; i<Size; i++)
    {
        if(Min>somearray[i])
        {
            Min = somearray[i];
        }
    }
        return Min;

}

double standardDeviation()
{
    //second assignment

}









int main()
{
    generaterandomvalue();
    print();
    cout<<endl;
    cout<<"The Average is: "<<getmean()<<endl;
    cout<<"The Maximum Number Is: "<<getmax()<<endl;
    cout<<"The Minimum Number Is: "<<getmin();
}
