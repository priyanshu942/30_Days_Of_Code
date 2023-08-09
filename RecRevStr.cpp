#include<bits/stdc++.h>
using namespace std;

void rev(string &str,int l,int r)
{
	if(l>=r)
	{
		return ;
	}
		swap(str[l],str[r]);
		
		rev(str,l+1,r-1);
}

int main()
{
	string str;
	cout<<"enter the string you want to reverse\n";
	cin>>str;
	int n=str.length()-1;
	rev(str,0,n);
	 cout<<str;
	
	return 0;
}
