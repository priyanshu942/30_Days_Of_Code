/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


class Node{
public:
  int data;
  Node*next;
  
  Node(int a)
  {
      data=a;
      next=NULL;
  }
};

Node*create()
{
    int data;
    cout<<"enter\n";
    cin>>data;
    
    Node*head=NULL;
    Node*tail=NULL;
    while(data!=-1)
    {
     Node*n=new Node(data);
     if(head==NULL)
     {
         head=n;
         tail=n;
     }
     else{
         tail->next=n;
         tail=tail->next;
         
     }
     cin>>data;
    }
    return head;
}

void deletel(int i,Node*head)
{
    Node*temp=head;
 int count=1;
 while(count<i-1)
 {
     temp=temp->next;
     count++;
 }
 
 temp->next=temp->next->next;
}

int main()
{
    
    Node*temp=create();
    deletel(4,temp);
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    return 0;
}
