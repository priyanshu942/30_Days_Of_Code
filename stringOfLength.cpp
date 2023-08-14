#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"Enter the string\n";
	string s;
	cin>>s;
	int a;
	cout<<"Enter the length of string\n";
	cin>>a;
	vector<string>v;
	for(int i=0;i<=s.length()-a;i++)
	{
		v.push_back(s.substr(i,a));
    }
    for(int i=0;i<=s.length()-a;i++)
    {
    	cout<<v[i]<<" ";
	}
	return 0;
}
