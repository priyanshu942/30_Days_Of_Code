#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node*left;
	Node*right;
	
	Node(int data)
	{
		this->data=data;
		left=NULL;
		right=NULL;
	}
};

Node*buildtree(Node*root)
{
	int data;
cout<<"enter the data ";
cin>>data;
	root=new Node(data);
	if(data==-1)
	{
		return NULL;
	}
	
	cout<<"ENTERing  data in left "<<data<<"\n";
	root->left=buildtree(root->left);//2
	cout<<"ENter data right "<<data<<"\n";
	root->right=buildtree(root->right);
	return root;
	
	
	
}
void levelordertraversal(Node*root )
{
	queue<Node*>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty())
	{
		Node*temp=q.front();
		
		q.pop();
		if(temp==NULL)
		{
			cout<<"\n";
			if(!q.empty())
			{
				q.push(NULL);
			}
		}
		else{
		cout<<temp->data; 
		if(temp->left)
		{
			q.push(temp->left);
		}
		if(temp->right)
		{
			q.push(temp->right);
		}
	}
	}
}
int main()
{
Node*root=NULL;

root=buildtree(root);	
	
	return 0;
}
