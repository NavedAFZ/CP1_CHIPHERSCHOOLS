#include <iostream>
#include <cstdio>
# include<bits/stdc++.h>
using namespace std;

/* a node of the singly linked list */
struct node
{
    int data;
    struct node *next;

    node(int x){
        data = x;
        next = NULL;
    }
};
/* A utility function to insert a node at the beginning of linked list */
void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node = new node(new_data);

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}

/* A utility function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf(" ");
}
void quickSort(struct node **headRef);
int main()
{
	int t,n,x;
	cin>>t;
	while(t--){


        cin>>n;n=n-1;
		cin>>x;
        node *temp,*head = new node(x);
        temp=head;
        while(n--)
        {
			cin>>x;
          temp->next=new node(x);
          temp=temp->next;
			}

    quickSort(&head);

    printList(head);
 while(head!= NULL){
     temp=head;
     head=head->next;
     free(temp);

 }
	}
    return 0;
}

/*This is a function problem.You only need to complete the function given below*/

/* a node of the singly linked list
struct node
{
    int data;
    struct node *next;

    node(int x){
        data = x;
        next = NULL;
    }
}; */
# include<bits/stdc++.h>
node* n1(node *h,int data)
	{
		node *temp;
		temp->data=data;
		temp->next=h;
		h=temp;
		return h;
	}
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
                    node* n3=(struct node *)malloc(sizeof(struct node));

		for(int i=0;i<n-1;i++)
		{
			pre=current;
			current=current->next;
		}
		n3->data=data;
		n3->next=current->next;
		pre->next=n3;
	}

		return head;

	}


//you have to complete this function
void quickSort(struct node **headRef) {
    node *h=*headRef;
    int count=0;
    while(h!=NULL)
    {
        count++;
        h=h->next;
    }
    cout<<count<<endl;
    int a[count];
    int i=0;
    node *h3=*headRef;
    while(h3!=NULL)
    {
        a[i]=h3->data;
        h3=h3->next;
        i++;
    }
    sort(a,a+count);
    for(int i=0;i<count;i++)
    {
        cout<<a[i]<<"**";
    }
    cout<<endl;
       node *h4=NULL;
    int m=1;
    for(int j=count-1;j>=0;j--)
    {
        h4=n1(h4,a[j]);


    }
    node *n2=h4;

    while(n2!=NULL)
	{
		cout<<n2->data<<" *"<<endl;
		n2=n2->next;
	}
*headRef=h4;
}
