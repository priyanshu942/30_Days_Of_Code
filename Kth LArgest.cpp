#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[1000];
	int a;
	int n;
	cout<<"enter the length of arr\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element place\n";
	cin>>a;
	sort(arr,arr+n);

	
	cout<<arr[n-a];
}
