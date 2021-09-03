#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
	struct node *previous;
	int data;
	struct node*next;
}*head,*tail,*temp;
main()
{
	int c,n,i,info,pos;
	head=NULL;
	tail=NULL;
	while(1)
	{
		printf("Enter 1 for creating a double linked list");
		printf("\nEnter 2 for displaying the double linked list");
		printf("\nEnter 3 to insert a number at the begenning");
		printf("\nEnter 4 to insert a number at the ending");
		printf("\nEnter 5 to insert a number at any position");
		printf("\nEnter 6 to delete an element at the beginning");
		printf("\nEnter 7 to delete an element at the ending");
		printf("\nEnter 8 to delete an element at a specified position");
		printf("\nEnter 9 to count the number of elements in the double linked list");
		printf("\nEnter the choice");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("Enter the range");
				scanf("%d",&n);
				for(i=0;i<n;i++)
				{
					printf("Enter the number\n");
					scanf("%d",&info);
					createlist(info);
				}
				break;
			case 2:
				display();
				break;
			case 3:
				printf("Enter the value that you wanna insert in the beginning");
				scanf("%d",&info);
				insertatbeg(info);
				break;
			case 4:
				printf("Enter the element that you wanna enter at the ending");
				scanf("%d",&info);
				insertatend(info);
				break;
			case 5:
				printf("Enter the position");
				scanf("%d",&pos);
				printf("\nEnter the value that you wanna insert");
				scanf("%d",&info);
				insertatpos(pos,info);
				break;
			case 6:
				deleteatbeg();
				break;
			case 7:
				deleteatend();
				break;
			case 8:
				printf("Enter the position that you wanna delete");
				scanf("%d",&pos);
				deleteatpos(pos);
				break;
			case 9:
				count();
		}		
	}
}
createlist(int info)
{
	struct node *k;
	k=(struct node*)malloc(sizeof(struct node));
	k->data=info;
	k->previous=NULL;
	k->next=NULL;
	if(head==NULL)
	{
		head=k;
		tail=k;
		head->next=head;
		head->previous=head;
	}
	else
	{
		tail->next=k;
		k->previous=tail;
		k->next=head;
		head->previous=k;
		tail=k;
	}
}
display()
{
	if(head==NULL)
	{
		printf("\nThe list is empty");
	}
	else
	{
		temp=head;
		while(temp->next!=head)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
		printf("%d",tail->data);
	}
	printf("\n");
}
insertatbeg(int info)
{
	struct node *k;
	k=(struct node*)malloc(sizeof(struct node));
	k->data=info;
	head->previous=k;
	k->next=head;
	k->previous=tail;
	tail->next=k;
	head=k;
}
insertatend(int info)
{
	struct node *k;
	k=(struct node*)malloc(sizeof(struct node));
	k->data=info;
	tail->next=k;
	k->previous=tail;
	k->next=head;
	head->previous=k;
	tail=k;
}
insertatpos(int pos,int info)
{
	struct node *k;
	int i;
	k=(struct node*)malloc(sizeof(struct node));
	temp=head;
	for(i=0;i<pos-1;i++)
	{
		temp=temp->next;
	}
	k->data=info;
	k->next=temp->next;
	temp->next->previous=k;
	k->previous=temp;
	temp->next=k;
}
deleteatbeg()
{
	temp=head;
	head=head->next;
	temp->next=NULL;
	temp->previous=NULL;
	head->previous=tail;
	tail->next=head;
}
deleteatend()
{
	temp=tail;
	tail=tail->previous;
	temp->previous=NULL;
	temp->next=NULL;
	tail->next=head;
	head->previous=tail;
}
deleteatpos(int pos)
{
	int i;
	temp=head;
	for(i=0;i<pos-1;i++)
	{
		temp=temp->next;
	}
	temp->next=temp->next->next;
	temp->next->previous=temp;
}
count()
{
	int c=1;
	if(head==NULL)
	{
		printf("\nThe list is empty");
	}
	else
	{
		temp=head;
		while(temp->next!=head)
		{
			c=c+1;
			temp=temp->next;
		}
		printf("\nThe total number of elements=%d",c);
	}
	printf("\n");
}
