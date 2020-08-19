# include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *next;
};

node* n1(node *h,int data)
	{
		node *temp=new node();
		temp->data=data;
		temp->next=h;
		h=temp;
		return h;
	}


void pr(node *head)
	{
	    node *temp=head;
	    while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
           // cout<<temp->data<<" ";
        }

	}

node *find_middle(node *head)
{
    node *temp1=head;
    node *temp2=head;
    node *prev;
    while(temp1!=NULL)
    {

        temp1=temp1->next;
        if(temp1==NULL)
        {
        prev=temp2;
        //prev->next=NULL
            temp2=temp2->next;
            break;
        }
        temp1=temp1->next;
        prev=temp2;
        temp2=temp2->next;

    }
    prev->next=NULL;
    return temp2;
}











/*Node* sortedMerge(Node* head_A, Node* head_B)
{
    // code here
    Node *temp1=head_A;
    Node *temp2=head_B;
    Node *prev;
    Node *nxt;
    if(temp2->data<temp1->data)
    {
         nxt=temp2->next;
        temp2->next=head_A;
        head_A=temp2;
        prev=temp2;
        temp2=nxt;

    }

    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp2->data<temp1->data)
        {
         //  cout<<temp2->data<<" * ";
            nxt=temp2->next;
            prev->next=temp2;
            temp2->next=temp1;
            prev=temp2;
            temp2=nxt;
        }
        else
        {
            //cout<<temp1->data<<" ";
            prev=temp1;
            temp1=temp1->next;
        }
    }
    if(temp2!=NULL)
    {
        prev->next=temp2;
    }
    return head_A;

}


*/
node* sortedMerge(node* head_A, node* head_B)
{
    // code here
    node *temp1=head_A;
    node *temp2=head_B;
    node *prev;
    node *nxt;
    if(temp2->data<temp1->data)
    {
         nxt=temp2->next;
        temp2->next=head_A;
        head_A=temp2;
        prev=temp2;
        temp2=nxt;

    }

    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp2->data<temp1->data)
        {
         //  cout<<temp2->data<<" * ";
            nxt=temp2->next;
            prev->next=temp2;
            temp2->next=temp1;
            prev=temp2;
            temp2=nxt;
        }
        else
        {
            //cout<<temp1->data<<" ";
            prev=temp1;
            temp1=temp1->next;
        }
    }
    if(temp2!=NULL)
    {
        prev->next=temp2;
    }
    return head_A;

}
node * merge_sort(node *head)
{
    if(head->next==NULL || head==NULL)
        return head;
    else
    {
        node *mid=find_middle(head);
        node *n1=merge_sort(head);
        node *n2=merge_sort(mid);
        node *n3=sortedMerge(n1,n2);
        return n3;

    }
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {


    	node *head=new node();
	head=NULL;
	node *head2=NULL;

/*
	head2=n1(head2,40);
	head2=n1(head2,15);
	head2=n1(head2,5);
	head2=n1(head2,3);
	pr(head2);*/
//	cout<<endl;
head=n1(head,5);
    head=n1(head,4);
    head=n1(head,3);
    head=n1(head,2);
    head=n1(head,1);

	head=n1(head,9);
    head=n1(head,8);
    head=n1(head,7);
	head=n1(head,6);

//
//	head=insert1(head,12);
	pr(head);
	cout<<endl;
	//head=rev2(head);
	/*pr(head2);
	cout<<endl;
	//print_middle(head);

	pr(head);
	head=getN(head,2);
*/
node *a1=merge_sort(head);
pr(a1);
cout<<endl;
/*head=sortedMerge(head,head2);
pr(head);*/
cout<<endl;
    }








}
