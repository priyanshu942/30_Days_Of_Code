#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[10]={3,7,8,2,5,6,7,8,9,1};
	int sum=0;
	int add=10;
	int count=0;
	for(int i=0;i<10;i++)
	{
		if(sum<add)
		{
			sum=sum+arr[i];
		}
		 if(sum>add)
		{
			sum=0;
		}
		 if(sum==add)
		{
			count++;
			sum=0;
		}
	}
	cout<<count;
}
