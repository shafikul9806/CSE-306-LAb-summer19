#include<iostream>
#include<cstdlib>
using namespace std;
#define row 5
#define col 5

int  Graph[row][col]={{-1,4,5,7,8},{4,-1,3,-1,-1},{5,3,-1,2,-1},{7,-1,2,-1,6},{8,-1,-1,6,-1}};


char Name[] = {'A','B','C','D','E'};

bool IsConnected(char X, char Y)
{
    int index1,index2;
    for(int i=0; i<row;i++)
    {
        if(Name[i] == X)
            index1 = i;
        if(Name[i] == Y)
            index2 = i;
    }
    if(Graph[index1][index2] >= 0)
        return true;
    return false;
}

bool IsComplete()
{
    bool comp=true;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(i==j)
                continue;
            else if(Graph[i][j] == -1)
            {
                comp=false;
                break;
            }
        }
    }
    return comp;
}

int Getweight()
{
  int weight=-1;
  int index1,index2;
    for(int i=0; i<row;i++)
    {
        if(Name[i] == X)
            index1 = i;
        if(Name[i] == Y)
            index2 = i;
    }

    return weight;
}



int main()
{
    if(IsConnected('A','D'))
        cout<<"\nA & D are connected";
    else
        cout<<"\nA & D are not connected";
        if(IsConnected('B','D'))
        cout<<"\nB & D are connected";
    else
        cout<<"\nB & D are not connected";

    if(IsComplete())
        cout<<"\nIt's A Complete Graph";
    else
        cout<<"\nIt's Not A Complete Graph";

}   cout<<"\nThe Weight Is"<<Getweight();


