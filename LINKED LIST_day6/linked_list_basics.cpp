#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node * next;
};
// insert at beginning
void insert1(node **head,int data)
{
    node *temp=new node();
    temp->data=data;
    temp->next=*head;
    *head=temp;
}
void delete1(node **head)
{

    node *temp=*head;
    if(temp!=NULL)
    {
    temp=temp->next;
    *head=temp;
    }
}
// insert at last
void insert2(node **head,int data)
{
      node *temp=*head;
      if(temp==NULL)
      {
      node *temp2=new node();
      temp2->data=data;
      temp2->next=NULL;
      *head=temp2;
      }
      else{
      while(temp->next!=NULL)
      {
          temp=temp->next;
      }
      node *temp2=new node();
      temp2->data=data;
      temp->next=temp2;
      temp2->next=NULL;
      }
}
void delete2(node **head)
{
      node *temp=*head;

    if(temp!=NULL)
    {
      node *prev=NULL;
      while(temp->next!=NULL)
      {
          prev=temp;
          temp=temp->next;
      }
      prev->next=NULL;
    }
}
// insert at n-th position
void insert3(node **head,int data,int n)
{
      node *temp=*head;
      if(temp==NULL)
      {
      node *temp2=new node();
      temp2->data=data;
      temp2->next=NULL;
      *head=temp2;
      }
      else if(n==1)
      {
          insert1(&(*head),data);
      }
      else{
            int i=0;
      while(i<n-2)
      {
          temp=temp->next;
          i++;
      }
      node *temp2=new node();
      temp2->data=data;

      temp2->next=temp->next;
      temp->next=temp2;
      }
}
void delete3(node **head,int n)
{
    node *temp=*head;
    if(temp!=NULL)
    {
        if(n==1)
        {
            delete1(&(*head));
        }
        else{
            int i=0;
            node *prev=NULL;
            while(i<n-1)
            {
                prev=temp;
                temp=temp->next;
                i++;
            }
            prev->next=temp->next;
        }
    }
}

void pr(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    node *head=NULL;
    insert1(&head,2);
    insert1(&head,3);
    insert1(&head,4);
    insert1(&head,5);
    insert1(&head,6);
    insert2(&head,7);
    insert3(&head,8,3);
    insert3(&head,9,1);
    insert3(&head,10,2);
    pr(head);
    cout<<endl;
    delete3(&head,2);
    pr(head);
    cout<<endl;

    delete3(&head,1);
    pr(head);
    cout<<endl;

    delete3(&head,7);
    //delete1(&head);
    //delete2(&head);
    pr(head);
}
