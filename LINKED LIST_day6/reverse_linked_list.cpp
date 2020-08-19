# include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *next;
};


node *insert1(node *head,int data)
{
    node *temp=new node();
    temp->data=data;
    temp->next=head;
    head=temp;
    return head;
}
void pr(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}
node *rev1(node *head)
{

    node *temp=head;
    node *nxt;
    node *prev=NULL;
    while(temp!=NULL)
    {
        nxt=temp->next;
        temp->next=prev;
        prev=temp;
        temp=nxt;

    }
    head=prev;
    return head;
}
node *rev2(node *head,node *prev)
{

if(head==NULL )
{
    return prev;
}
    node *temp=head;

    node *nxt=temp->next;
    temp->next=prev;
    prev=temp;


    head=rev2(nxt,prev);
    return head;
}
node *rev_k(node *head,int k)
{
    node *nxt=NULL;
    node *pre=NULL;
    int i=0;
    node *cur=head;
    while(cur!=NULL && i<k)
    {
        nxt=cur->next;
        cur->next=pre;
        pre=cur;
        cur=nxt;
        i++;
    }
    if(nxt!=NULL)
    {
        node *n1=rev_k(cur,k);
        head->next=n1;
    }
    return pre;
}
int main()
{
    node *head=NULL;
    head=insert1(head,5);
    head=insert1(head,4);
    head=insert1(head,3);
    head=insert1(head,2);
    head=insert1(head,1);
    pr(head);
    head=rev1(head);
    pr(head);
    head=rev2(head,NULL);
    pr(head);
    head=rev_k(head,3);
    pr(head);
}
