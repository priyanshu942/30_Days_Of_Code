#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int arr[10000];
	cout<<"enter how many number are there\n";
	cin>>n;
	
	cout<<"Enter numbers\n";
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum=sum+arr[i];
	}
	
	cout<<"average is \n"<<(float)sum/n;
	
	
}
