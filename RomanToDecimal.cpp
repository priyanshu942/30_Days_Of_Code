#include<bits/stdc++.h>
using namespace std;
int main()
{
	string S;
	cout<<"Enter the string int roman number \n";
	cin>>S;
  int n=S.length();
         int count=0;
        int flag=0;
        int a;
        for(int i=n-1;i>=0;i--)
        {
            if(S[i]=='V')
            {
                a=5;
                if(a>=flag)
                {
                count=count+5;
                }
                else{
                    count=count-5;
                }
                flag=a;
            }
             if(S[i]=='X')
            {
                a=10;
                if(a>=flag)
                {
                count=count+10;
                }
                else{
                    count=count-10;
                }
                flag=a;
            }
             if(S[i]=='L')
            {
                a=50;
                if(a>=flag)
                {
                count=count+50;
                }
                else{
                    count=count-50;
                }
                flag=a;
            }
           if(S[i]=='C')
            {
                a=100;
                if(a>=flag)
                {
                count=count+100;
                }
                else{
                    count=count-100;
                }
                flag=a;
            }
             if(S[i]=='D')
            {
                a=500;
                if(a>=flag)
                {
                count=count+500;
                }
                else{
                    count=count-500;
                }
                flag=a;
            }
             if(S[i]=='M')
            {
                a=1000;
                if(a>=flag)
                {
                count=count+1000;
                }
                else{
                    count=count-1;
                }
                flag=a;
            }
             if(S[i]=='I' )
            {
                a=1;
                if(a>=flag)
                {
                count=count+1;
                }
                else{
                    count=count-1;
                }
                flag=1;
            }
            
        }
        cout<<count;
    }
