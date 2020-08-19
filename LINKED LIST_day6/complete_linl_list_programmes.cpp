# include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *next;
};


node* rev(node *head)
{
    node *cur=head;
    node *pre=NULL;
    node * nxt=NULL;
    while(cur!=NULL)
    {
        nxt=cur->next;
        cur->next=pre;
        pre=cur;
        cur=nxt;
    }
    head=pre;
    return head;
}

//  DELETION AT FIRST POSITION
node* delete1(node *h)
	{
		node *temp=h;
		temp=temp->next;

		h=temp;
		return h;
	}





	//  INSERTING AT FIRST POSITION
node* n1(node *h,int data)
	{
		node *temp=new node();
		temp->data=data;
		temp->next=h;
		h=temp;
		return h;
	}





	//INSERTING AT Nth POSITION
node* delete2(node *head,int n)
	{
		if(n==1)
		{
			head=delete1(head);
		}
		else
		{

		node* current=head;
		node *pre=NULL;
		node* n3=new node();
		for(int i=0;i<n-1;i++)
		{
			pre=current;
			current=current->next;
		}
		current=current->next;
		pre->next=current;
	}

		return head;

	}





	//DELETION AT Nth POSITION
	node* insert(node *head,int data,int n)
	{
		if(n==1)
		{
			head=n1(head,data);
		}
		else
		{

		node* current=head;
		node *pre=NULL;
		node* n3=new node();
		for(int i=0;i<n-1;i++)
		{
			pre=current;
			current=current->next;
		}
		n3->data=data;
		n3->next=current;
		pre->next=n3;
	}

		return head;

	}

node * print_middle(node *head)
{
    node *temp1=head;
    node *temp2=head;
    if(temp1==NULL)
    {
        cout<<"empty"<<endl;
    }
    if(temp1->next==NULL)
    {
        cout<<temp1->data<<endl;
    }
    else
    {
        bool a1=false;
    while(temp1->next!=NULL)
    {
      temp1=temp1->next;
      if(temp1->next==NULL)
      {
          cout<<temp2->next->data<<endl;
          a1=true;
          break;
      }
      else{
        temp1=temp1->next;
        temp2=temp2->next;
      }
    }
    if(a1!=true)
    cout<<temp2->data;
    }
}
node *find_middle(node *head)
{
    node *temp1=head;
    node *temp2=head;
    while(temp1!=NULL)
    {
        temp1=temp1->next;
        if(temp1==NULL)
        {
            temp2=temp2->next;
            break;
        }
        temp1=temp1->next;
        temp2=temp2->next;

    }
    return temp2;
}
	//COUNTING NUMBER OF NODE IN A LINKED LIST
int count(node *head)
{
	node *temp=head;
	int c1=0;
	while(temp!=NULL)
	{
		temp=temp->next;
		c1++;
	}
	return c1;
}





	//DELETION AT LAST POSITION


node* delete4(node *head)
{
	node *current=head;
	node *pre=NULL;
	node *n4=new node();
	while(current->next!=NULL)
	{
		pre=current;
		current=current->next;
	}
	pre->next=NULL;
	return head;

	}


	//INSERTING AT LAST POSITION
node* insert1(node *head,int data)
{
    if(head==NULL)
    {
        head=n1(head,data);
    }
    else{
	node *current=head;
	node *pre=NULL;
	node *n4=new node();
	while(current!=NULL)
	{
		pre=current;
		current=current->next;
	}
	n4->data=data;
	n4->next=NULL;
	pre->next=n4;
    }
	return head;

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
node* rev2(node *head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    node *temp=rev2(head->next);
    head->next->next=head;
    head->next=NULL;
    return temp;
}

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

node * getN(node *head, int n,  int num)
{
    if(n==num)
    {
        n=1;
    }
       node *h=head;
       node *pt1=head;
       node *pt2=head;
       int c=1;
       node *prev1,*prev2,*o1,*next1,*next2;
           while(c<n)
           {
               prev1=pt1;
               pt1=pt1->next;
               c++;
           }
       o1=pt1;
       next1=o1->next;
       pt1=pt1->next;
       node *prev;
       int d=0;
       while(pt1!=NULL)
       {
           pt1=pt1->next;
           prev2=pt2;
           pt2=pt2->next;
           d++;
       }

       next2=pt2->next;

        if(n==1 )
       {

           prev2->next=h;
           node *m=h->next;
           pt2->next=m;
           h->next=NULL;
           head=pt2;
         return head;
       }
      else
      {

       prev1->next=pt2;
       if(d==n)
       {


       pt2->next=o1;
       }
       else{
       pt2->next=next1;
       prev2->next=o1;
       }
       o1->next=next2;
      }
       return head;
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


	head2=n1(head2,40);
	head2=n1(head2,15);
	head2=n1(head2,5);
	head2=n1(head2,3);
	pr(head2);
	cout<<endl;
	//head=n1(head,9);
    head=n1(head,8);
    head=n1(head,7);
	head=n1(head,6);
    head=n1(head,5);
    head=n1(head,4);
    head=n1(head,3);
    head=n1(head,2);
    head=n1(head,1);

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
//node *f1=find_middle(head);
head=sortedMerge(head,head2);
pr(head);
cout<<endl;
    }








}
