#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct list *link;
}list;
list *create();
list *insert_front(list *);
list *insert_end(list *);
list *insert_pos(list *);
void display();
list *del_front(list *);
list *del_end(list *);
list *del_pos(list *);
main()
{
	list *start=NULL;
	int ch,k;
	char option;
	do
	{
	
		if(start==NULL)
		{
			printf("list is empty,want to create?");
		option=getche();
		if(option=='y'||option=='Y')
			start=create();
		else
			exit(0);
		}
		display(start);
		printf("\n press 1 for insert front");
		printf("\n press 2 for insert end");
		printf("\n press 3 for insert at any position");
		printf("\n press 4 for delete front");
		printf("\n press 5 for delete end");
		printf("\n press 6 for insert position");
		printf("\n enter ur choice");
		scanf("%d",&k);
		switch(k)
		{
			case 1:
				start=insert_front(start);
				break;
			case 2:
				start=insert_end(start);
				break;
			case 3:
				start=insert_pos(start);
				break;
			case 4:
				start=del_front(start);
				break;
			case 5:
				start=del_end(start);
				break;
			case 6:
				start=del_pos(start);
				break;
			default:
				printf("enter wrong choice");
		}
		printf("u want to continue?press 1");
		scanf("%d",&ch);
	}while(ch==1);
}
list *create()
{
	list *p;
	int d;
	p=(list*)malloc(sizeof(list));
		printf("enter data");
		scanf("%d",&d);
	p->data=d;
	p->link=NULL;
	return(p);
}
list *insert_front(list *start)
{
	list *n;
	n=create();
	n->link=NULL;
	start=n;
	return(n);
}
list *insert_end(list *start)
{
	list *p,*n;
	p=start;
	n=create();
	while((p->link)!=NULL)
		p=p->link;
	p->link=n;
	return(start);
}
list *insert_pos(list *start)
{
	list *p;
	int k;
	p=start;
		printf("enter data of node to be deleted");
		scanf("%d",&k);
	while(p->data!=k)
	{
		p=p->link;
	}
	return(start);
}
void display(list *start)
{
	list *p;
	p=start;
	while(p!=NULL)
	{
		printf("|%d|->",p->data);
		p=p->link;
	}
}
list *del_front(list *start)
{
	list *p;
	p=start;
	start=p->link;
	p->link=NULL;
	free(p);
	return(start);
}
list *del_end(list *start)
{
	list *q,*t;
	t=start;
	while(t->link!=NULL)
	{
		q=t;t=t->link;
	}
	q->link=NULL;
	free(t);
	return(start);
}
list *del_pos(list *start)
{
	list *p,*q;
	int k;
	p=start;
		printf("enter data to be deleted");
		scanf("%d",&k);
	while(p->data!=k)
	{
		q=p;
		p=p->link;
	}
	free(p);
	return(start);
}	
