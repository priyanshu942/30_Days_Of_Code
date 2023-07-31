#include <iostream>

using namespace std;
int fact(int n)
{
    int a;
    
    if(n==0)
    {
        return 1;
    }
    
      return n*fact(n-1);
    
    
    
}
int main()
{
    int b=fact(5);
    cout<<b;
    return 0;
}
