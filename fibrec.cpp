/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int fib(int n)
{
    if(n==0 )
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    
int a=fib(n-1);
// cout<<a<<" ";
int b=fib(n-2);
//cout<<a<<" ";
//cout<<b<<" ";
return a+b;
}

int main()
{
    int a=fib(5);
    cout<<a;

    return 0;
}
