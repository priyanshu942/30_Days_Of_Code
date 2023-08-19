#include<bits/stdc++.h>
using namespace std;


int main()
{
	int arr[7]={2,5,1,6,1,7,1};
	vector<int>rr;
	int n=7;
	
	for(int i=0;i<n-1;i++)
	{
		int flag=0;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				flag=1;
				rr.push_back(arr[j]);
				break;
			}
		}
		if(flag==0)
		{
			rr.push_back(-1);
		}
	}
	rr.push_back(-1);
	
	for(int i=0;i<n;i++)
	{
		cout<<rr[i]<<" ";
	}
	return 0;
}
