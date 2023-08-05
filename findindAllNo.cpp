#include<bits/stdc++.h>
using namespace std;

vector<int>arr1;
int count=0;
void find(int arr[],int a,int n)
{
	if(n==0)
	{
		return;
	}
	if(arr[n]==a)
	{
		arr1.push_back(n);
	}
	find(arr,a,n-1);
}
int main()
{
	int arr[5]={1,2,3,4,3};
	int a=6;
	find(arr,a,4);
	for(int i=0;i<arr1.size();i++)
	{
		cout<<arr1[i]<<" ";
	}
}
