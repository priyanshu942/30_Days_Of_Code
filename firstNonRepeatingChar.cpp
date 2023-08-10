#include<bits/stdc++.h>
using namespace std;

int main()
{
//	string arr;
//	cout<<"Enter string\n";
//	cin>>arr;
//	
	string arr="helloeh";
	int n=arr.length();
//	for(int i=0;i<n;i++)
//	{
//		int count=0;
//		for(int j=0;j<n;j++)
//		{
//			
//			
//			if(arr[i]==arr[j] )
//			{
//				count++;
//			}
//			
//			
//		}
//		if(count==1)
//			{
//				cout<<arr[i];
//				break;
//			}
//	}
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//optimal
#include <bits/stdc++.h>

using namespace std;

int main()
{
 unordered_map<char,int>mp;
 string a;
 cout<<"enter the string\n";
 cin>>a;
 int flag=0;
 int n=a.length();
 for(int i=0;i<n;i++)
 {
     mp[a[i]]++;
 }
 char c;
 for(int i=0;i<n;i++)
 {
     if(mp[a[i]]==1)
     {
         c=a[i];
         flag=1;
         break;
     }
 }
 if(flag)
 {
     cout<<c;
 }
 else{
     cout<<-1;
 }
}
}
