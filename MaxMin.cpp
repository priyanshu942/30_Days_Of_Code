#include<bits/stdc++.h>
using namespace std;

int main()
{
	int max=INT_MIN;
	int min=INT_MAX;
	int n;
	cout<<"enter no of elements\n";
	cin>>n;
	int arr[1000];
	cout<<"Enyter elements\n";
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];	
	}
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		
		if(arr[i]<min)
		{
			min=arr[i];
		}
		
		
	}
	cout<<max<<" "<<min;
	
	return 0;
}
