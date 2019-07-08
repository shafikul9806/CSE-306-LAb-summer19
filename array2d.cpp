#include<iostream>
//#include<cstdlib>
//#include<ctime>

using namespace std;
/*#define row 3
#define col 4
int A [row] [col];
void Initializearray()
{
    srand(time(NULL));
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            A[i][j] = rand()%11;
        }
    }
}*/



int row,col;

void initializeArray()
{

    cout<<"Enter The Number Of Rows of Array: ";
    cin>>row;
    cout<<"Enter The Number Of Columns of Array: ";
    cin>>col;

    int ary[row][col];

    /*int** ary = new int*[row];
    for(int i=0; i<row; i++)
    {
        ary[i] = new int[col];
    }*/

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {

            cout<<"Enter "<<i<<j<<"th value: "<<endl;
            cin>>ary[i][j];

        }
    }


    for(int i=0; i<row; i++)
    {
        cout<<endl;
        for(int j=0; j<col; j++)
        {
            cout<<ary[i][j]<<'\t';

        }
    }
for(int i = 0; i < row; i++)
    delete [] ary[i];
    delete [] ary;

}






/*int A[row][col] = {
   {20, 51, 72, 33} ,
   {34, 45, 66, 78} ,
   {89, 90, 100, 111}
};*/




/*int maximum()
{
    int temp = INT_MIN;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(A[i][j]>temp)
            {
                temp = A[i][j];
            }
        }
    }
    return temp;
}

int minimum()
{
    int temp = INT_MAX;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(A[i] [j]<temp)
            {
                temp = A[i] [j];
            }
        }
    }
    return temp;
}*/

int main()
{

    initializeArray();


    /*cout<<endl;
    cout<<"The Maximum Number is: "<<maximum();
    cout<<endl;
    cout<<"The Minimum Number is: "<<minimum();*/

}
