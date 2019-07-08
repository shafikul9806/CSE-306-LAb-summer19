#include <iostream>
using namespace std;
int FibArray[51]
int fib(int n){
	if(n<=2)
    {
        FibArray[n] = n-1;
        return (n-1);
    }
    if(FibArray[n] != -1)
    {
        return FibArray[n];
    }
	FibArray[n] = fib(n-1) + fib(n-2);
	return FibArray[n];
}

int main(){

    for(int i=-1; i<51;i++)
    {
        FibArray[i] = -1;
    }
	int n;
	cout <<"Enter a value for n: ";
	cin >>n;
	cout <<"\nFib("<<n<<") = " << fib(n) << endl;
}
