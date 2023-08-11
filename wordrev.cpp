#include<bits/stdc++.h>
using namespace std;

int main()
{
string s="i love programming";

string arr[10];
int j=0;
string a="";
for(int i=0;i<s.length();i++)
{
	if(s[i]!=' ')
	{
		a=a+s[i];
	}
	else if(s[i]==' ')
	{
		arr[j]=a;
		j++;
		a="";
	}
}
arr[j]=a;
j++;

for(int i=j-1;i>=0;i--)
{
	cout<<arr[i]<<" ";
}
	
	
	return 0;
}
