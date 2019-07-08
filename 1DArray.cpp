#include<iostream>
#include<cstdlib>
#include<ctime>
#include<math.h>
using namespace std;
const int Size = 10;
int SomeArray[Size];



void generateRandomValues(){

    srand(time(NULL));
    for(int i = 0; i < Size; i++){
        SomeArray[i] = rand()%(51-10)+10;
    }

}

void Sort(int x)
{
    if(x == 1)
    {
       for (int i = 0; i < Size; ++i)
           for (int j = 0; j < Size - i - 1; ++j)
               if (SomeArray[j] > SomeArray[j + 1])
                {
                   int temp = SomeArray[j];
                   SomeArray[j] = SomeArray[j + 1];
                   SomeArray[j + 1] = temp;
                }
    }

    else
    {
       for (int i = 0; i < Size; ++i)
           for (int j = 0; j < Size - i - 1; ++j)
               if (SomeArray[j] < SomeArray[j + 1])
                {
                   int temp = SomeArray[j];
                   SomeArray[j] = SomeArray[j + 1];
                   SomeArray[j + 1] = temp;
                }
    }
}

void Print(){
    for(int i = 0; i < Size; i++){
        cout << SomeArray[i] << endl;
    }

}

double getMean(){
    int sum = 0;
    for(int i = 0; i < Size; i++)
        sum += SomeArray[i];

    return (sum * 1.0/Size);

}


int getMode()
{
    int c=1,a=0,b=0;
    for(int i=0;i<Size;i++)
    {
        for(int x=i+1;x<Size;x++)
        {
            if(SomeArray[i]==SomeArray[x])
            {
            c++;
            }
        }
        if(a<c)
        {
            a=c;
            b=SomeArray[i];
        }
        c=1;
    }
    cout<<"The most appearing number is: "<<b<<","<<"it appears "<<a<<" times in this array"<<endl;

}

double getStandardDeviation()
{
    double Deviation=0.0;
    int NewArray[Size];
    float sum=0, average;
    for(int i=0;i<Size;i++)
    {
        sum=sum+SomeArray[i];
    }
    average=sum/Size;

    for(int x=0;x<Size;x++)
    {
        NewArray[x]=pow(SomeArray[x]-average,2);
    }
 float Newsum=0;
 for(int p=0;p<Size;p++)
 {
     Newsum=Newsum+NewArray[p];

 }

 Deviation=Newsum/Size;
return Deviation;
}


void Search()
{
    int a;
    cout<<"What Number You Want To Find: ";
    cin>>a;
    int x=0;
    for(int i=0; i<Size; i++)
    {
        if(SomeArray[i] == a)
        {
           cout<<"The Number is: "<<a<<endl;

           x++;
        }

    }
    if(x == 0)
    {
        cout<<"Not Found"<<endl;
    }

}


int main()
{

    generateRandomValues();
    Sort(1);
    Print();
    cout<<"The Average Is: "<<getMean()<<endl;
    cout<<"The Standard Deviation Is: "<<getStandardDeviation()<<endl;
    Search();;
    getMode();
}
