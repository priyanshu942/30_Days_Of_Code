#include<bits/stdc++.h>
using namespace std;

int fidcor(int a[],int l,int r)
{
	int pivot=a[l];
	int i=l;
	int j=r;
	while(i<j)
	{
		while(a[i]<=pivot)
		{
			i++;
		}
		while(a[j]>pivot)
		{
			j--;
		}
		
		if(i<j)
		{
			swap(a[i],a[j]);
		}
			
		
	}
	swap(a[j],a[l]); 
	return j;
}

void qs(int arr[],int s,int e)
{
	
	
	if(s<e)
	{
		int mid=fidcor(arr,s,e);
		qs(arr,s,mid-1);
		qs(arr,mid+1,e);
	}
	
}
int main()
{
	int arr[5]={4,2,5,1,7};
	
	qs(arr,0,4);
	
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
		
	
	return 0;
}
