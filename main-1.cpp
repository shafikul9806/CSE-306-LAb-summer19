#include<iostream>
#include<cstdlib>
#include<ctime>
#include<math.h>
using namespace std;

const int SIZE = 100;
int SomeArray[SIZE];

void generateRandomValues(){

    srand(time(NULL));
    for(int i = 0; i < SIZE; i++){
        SomeArray[i] = rand()%101;
    }

}

void Print(){
    for(int i = 0; i < SIZE; i++){
        cout << SomeArray[i] << endl;
    }

}

double getMean(){
    int sum = 0;
    for(int i = 0; i < SIZE; i++)
        sum += SomeArray[i];

    return (sum * 1.0/SIZE);

}

int getMode()
{
    int counter=1,a=0,b=0;
    for(int i=0;i<SIZE;i++)
    {
        for(int z=i+1;z<SIZE;z++)
        {
            if(SomeArray[i]==SomeArray[z])
            {
            counter++;
            }
        }
        if(a<counter)
        {
            a=counter;
            b=SomeArray[i];
        }
        counter=1;
    }
    cout<<" The highest number is: "<<b<<", "<<a<<" times in this array"<<endl;

}

double getStandardDeviation()
{
    double deviation=0.0;
    int newarray[SIZE];
    float sum=0, average;
    for(int i=0;i<SIZE;i++)
    {
        sum=sum+SomeArray[i];
    }
    average=sum/SIZE;

    for(int z=0;z<SIZE;z++)
    {
        newarray[z]=pow(SomeArray[z]-average,2);
    }
 float newsum=0;
 for(int p=0;p<SIZE;p++)
 {
     newsum=newsum+newarray[p];

 }

 deviation=newsum/SIZE;

return deviation;
}

int getMax(){
    int max = -1;
    for(int i = 0; i <SIZE; i++){
        if(SomeArray[i] > max)
            max = SomeArray[i];
    }
    return max;

}

int getMin(){
    int min = 101;
    for(int i = 0; i < SIZE; i++){
        if(SomeArray[i] < min)
            min = SomeArray[i];
    }
    return min;

}


int main(){

    generateRandomValues();
    Print();
    cout << "Average = " << getMean() << endl;
    cout << "Max = " << getMax() << endl;
    cout << "Min = " << getMin() << endl;
    getMode();
    cout<< "Standard Deviation= " << getStandardDeviation()<<endl;
    return 0;
}







