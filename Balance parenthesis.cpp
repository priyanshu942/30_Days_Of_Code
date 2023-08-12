#include<bits/stdc++.h>
using namespace std;

int main()
{
	string ss="({[[[]]]})";
	stack<int>S;
	int n=ss.length();
	for(int i=0;i<n;i++)
	{
		if(ss[i]=='('||ss[i]=='['||ss[i]=='{')
		{
			S.push(ss[i]);
		}
		else if(ss[i]==')'&&S.top()=='(')
		{
			S.pop();
		}
		else if(ss[i]==']'&&S.top()=='[')
		{
			S.pop();
		}
		else if(ss[i]=='}'&&S.top()=='{')
		{
			S.pop();
		}
	}
	if(S.empty())
	{
		cout<<"True";
	}
	else{
		cout<<"False";
	}
	return 0;
}
