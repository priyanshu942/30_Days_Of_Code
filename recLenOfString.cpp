#include<bits/stdc++.h>
using namespace std;

int length(char s [])
{
    int i=0;
	if(s[0]  =='\0')
	{
		return 0;
	}
	int l=length(s+1);
	return 1+l;
}
int main()
{
	char s[10]  ="helloo";
int a=	length(s);

cout<<a;
	
	return 0;
}
