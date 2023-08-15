#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str1;
	string str2;
cout<<"Enter string 1 ";
cin>>str1;

cout<<"Enter string2";
cin>>str2;
int arr[26]={0};
int arr1[26]={0};
        for(int i=0;i<str1.length();i++)
        {
            arr[str1[i]-'a']=(str2[i]-'a');
            arr1[str2[i]-'a']=(str1[i]-'a');
        }
        
        string s1="";
        string s2="";
        for(int i=0;i<str1.length();i++)
        {
            s1=s1+(char)(arr[str1[i]-'a']+'a');
            s2=s2+(char)(arr1[str2[i]-'a']+'a');
        }
        
        if(s1==str2&&s2==str1)
        {
            cout<<"True";
        }
        
        else{
            cout<<"False";
        }
        
}
