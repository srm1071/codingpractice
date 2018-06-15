#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
	int data;
	struct list *link;
}list;
list *create();
list *insert_front(list *);
list *concat(list *);
void display();
main()
{
	list *l1=NULL;
	list *l2=NULL;
	list *l3;
	int k;
	if(l1==NULL && l2==NULL)
	{
		l1=create();
		l2=create();
	}
	printf("press 1 for creating 1st list");
	scanf("%d",&k);
	while(k==1)
	{
		l1=insert_front(l1);
			printf("press 1 for continue");
			scanf("%d",&k);
	}
	printf("press 2 create second list");
	scanf("%d",&k);
	while(k==2)
	{
		l2=insert_front(l2);
			printf("press 2 for continue");
			scanf("%d",&k);
	}
	display(l1);
	display(l2);
	//l3=concat(l1,l2);
	//display(l3);
}
list *create()
{
	list *p;
	int d;
	p=(list*)malloc(sizeof(list));
		printf("enter the data");
		scanf("%d",&d);
	p->data=d;
	p->link=NULL;
	return(p);
}
list *insert_front(list *start)
{
	list *p;
	p=create();
	p->link=start;
	start=p;
	return(start);
}
list *concat(list *st1,list *st2)
{
	list *p;
	p=st1;
	while(p->link=NULL)
		p=p->link;
	p->link=st2;
	return(st1);
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
		
