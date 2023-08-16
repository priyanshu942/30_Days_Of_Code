#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	int b;
	cout<<"Enter the first number\n";
	cin>>a;
	cout<<"Enter the second number\n";
	cin>>b;
	int gcd=1;
	for(int i=2;i<=a;i++)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=i;
		}
	}
	
	cout<<"GCD is"<<gcd;
	
	
	return 0;
}
