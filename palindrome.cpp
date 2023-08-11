#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
cout<<"Enter a string \n";
cin>>s;
int flag=0;
int i=0;
int j=s.length()-1;

while(i<j)
{
if(s[i]!=s[j])
{
	flag=1;
	break;
}
i++;
j--;
	
}
if(flag==0)
{
	cout<<"palindrome";
	}	
if(flag==1)
{
	
	cout<<"not palindrome";
}
}
