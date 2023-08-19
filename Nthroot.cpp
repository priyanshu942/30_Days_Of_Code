#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	cout<<"Enter the number you have to find root of\n";
	cin>>a;
	int b;
	cout<<"Enter the what root you want\n";
	cin>>b;
	
	int d;
	for(int i=2;i<a;i++)
	{
		int c=1;
		 for(int j=0;j<b+1;j++)
		 {
		 	c=c*i;
		 	
		 	if(c==a &&  j==b-1 )
		 	{
		 		d=i;
				 break;		
			}
		 }
	}
	
	cout<<d;
	return 0;
}
