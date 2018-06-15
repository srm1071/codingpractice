#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
	int data;
	struct list * link;
}list;
list *create();
list *display();
list *count();
list *check();
main()
{
	list *start,*p;
	int k,ch,t;
	start=create();
	p=start;
	while(p->link!='\0')
	{
		p=p->link;
	}
	start=display(start);
	do
	{
		
		printf("\npress 1 for create");
		printf("\npress 2 for display");
		printf("\npress 3 for count");
		printf("\npress 4 for check");
		printf("\nenter your choice");
		scanf("%d",&k);
		switch(k)
		{
			case 1:
				start=create(start);
				break;
			case 2:
				start=display(start);
				break;
			case 3:
				start=count(start);
				break;
			case 4:
				start=check(start);
				break;
			default:
				printf("wrong choice");
				break;
		}
		printf("want to continue?press 1");
		scanf("%d",&t);
	}while(t==1);
	return(0);
}
	
	
list * create()
{
	int d;
	list * p;
	p=(list*)malloc(sizeof(list));
		printf("enter data item");
		scanf("%d",&d);
	p->data=d;
	p->link='\0';
	return(p);
}
list * display(list *start)
{
	list * p;
	p=start;
	while(p!='\0')
	{
		printf("|%d|->",&p->data);
		p=p->link;
	}
	return(start);
}
list * count(list *start)
{
	list * p;int node=1;
	p=start;
	while(p->link!='\0')
	{
		p=p->link;
		node++;
	}
	printf("number of node is %d",node);
	return(start);
}
list * check(list *start)
{
	
	int item;
	list *p;
	p=start;
		printf("enter the item to find?");
		scanf("%d",&item);
	while(p->link!='\0')
	{
		p=p->link;
		if(p->link==item)
			printf("data exists");
		else
			printf("data doesn't exist");
	}
	return(start);
}				
