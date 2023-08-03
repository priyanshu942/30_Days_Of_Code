#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter size of Array\n";
	cin>>n;
	int arr[10000];
	cout<<"Enter elements in array\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int x=0;
	cout<<"Enter the element you have to find\n";
	cin>>x;
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			count++;
		}
	}
	cout<<"Count is"<<count;
}
