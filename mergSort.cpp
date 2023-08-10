#include<bits/stdc++.h>
using namespace std;

//In merge sort we first divide all are element in sigle  the we use join to place them in sorted wise
void join(int arr[],int l,int mid,int r)
{
	int out[11];
	int k=l;
	int i=l;
	int j=mid+1;
	while(i<=mid &&j<=r )
	
	{
		if(arr[i]>arr[j])
		{
			out[k]=arr[j];
			j++;
			
		}	
		
		else
		{
			out[k]=arr[i];
			i++;
		
			
		}
	
		k++;
	}
	if(i>mid)
	{
	while(j<=r)
	{
		out[k]=arr[j];
		k++;
		j++;
	}
	
}
else{

	
	while(i<=mid)
	{
		out[k]=arr[i];
		k++;
		i++;
	}
}
	for(int a=l;a<=r;a++)
	{
		arr[a]=out[a];
	}
	
}

void merge(int arr[5],int l,int r)
{
	if(l<r)
	{
	
	int mid=(l+r)/2;
	merge(arr,l,mid);
	merge(arr,mid+1,r);
	join(arr,l,mid,r);
	}
}
int main()
{
	int arr[11]={4,8,2,1,9,6,8,1,4,5,65};
	merge(arr,0,10);
	for(int i=0;i<11;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
