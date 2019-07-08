#include<iostream>
using namespace std;

int len = 6;
int arr[len]={2,4,5,6,1,3};


void selectionsort()
{
    int pos = 0;
    for(i=0; i<len-1; i++)
    {
        pos = i;
        for(j=i+1; j<len-1; j+=1)
        {
            if(arr[j]>arr[pos])
            {
                pos = j;
            }
                int tmp = arr[j];
                arr[j] = arr[pos];
                arr[pos] = tmp;
        }
    }
    for(int i=0; i<len; i++)
    {
        cout<<arr[i];
    }
}

int main()
{
 for(int i=0; i<len; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    selectionsort();
}
