#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[10]={1,-1,2,3,4,-5,-6,-8,9,10};
	
	for(int i=0;i<10;i++)
	{
		if(arr[i]>0)
		{
			for(int j=i+1;j<10;j++)
			{
				if(arr[j]<0)
				{
					swap(arr[i],arr[j]);
				}
			}
		}
	}
	
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
