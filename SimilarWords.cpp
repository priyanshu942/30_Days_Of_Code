#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	vector<string>v={"ab" ,"aa" ,"aa" ,"bcd","abv"};
	int count=0;
	for(int i=0;i<v.size();i++)
	{
	    int flag=0;
		for(int j=0;j<v.size();j++)
		{
			if(v[i]==v[j] && i!=j)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			count++;
		}
	}
	
	cout<<count;
	return 0;
}
