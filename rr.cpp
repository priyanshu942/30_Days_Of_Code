#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number of elements\n";
	cin>>n;
	int arr[1000];
	int arr1[1000]={0};
	cout<<"Enter the elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int r;
	cout<<"Enter to be roated by\n";
	cin>>r;
	int ar=n-r;
	for(int i=0;i<n;i++)
	{
		arr1[(i+ar)%(n)]=arr[i];
	}

	
//	for(int i=0;i<r;i++)
//	{
//		int a=arr[0];
//		for(int j=1;j<n;j++)
//		{
//			arr[j-1]=arr[j];
//		}
//		arr[n-1]=a;
//	}


	for(int i=0;i<n;i++)
	{
		cout<<arr1[i]<<" ";
	}
	
	return 0;
}
