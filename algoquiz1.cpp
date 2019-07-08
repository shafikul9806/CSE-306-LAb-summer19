#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2,3,1,4,7,3};
    int Max = arr[0], x;
    for(int i=0; i<6;i++)
    {
        if(arr[i]>Max)
        {
            Max = arr[i];
            x = i;
        }
    }
   cout<<"The Maximum Number Is: "<<Max<<endl;
if(Max == arr[5])
{
    cout<<Max<<endl;
}
else
{
    int a = arr[x];
    arr[x] = arr[5];
    arr[5] = a;
}

for(int i=0; i<6;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
for(int i=0;i<6;i++)
{
    for(int j=0;j<5;j++)
    {
      if(arr[i]<arr[j])
      {
          int temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
      }
    }
}


for(int i=0; i<6;i++)
{
    cout<<arr[i]<<" ";
}

}


