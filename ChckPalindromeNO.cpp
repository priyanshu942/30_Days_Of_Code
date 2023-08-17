#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number\n";
	cin>>n;
	int a=1;
	int b=1;
	int flag=0;
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(c==n)
		{
			flag=1;
			cout<<"True";
			break;
		}
		c=a+b;
		a=b;
		b=c;
	}
	if(flag==0)
	{
		cout<<"False";
	}
	
	
	return 0;
}
