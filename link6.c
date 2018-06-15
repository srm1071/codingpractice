#include<stdio.h>
#include<stdlib.h>
int top=-1;
#define max 20
typedef struct list
{
	int data;
	struct list *link;
}list;
list *create();
list *insert_front(list *);
list *del_front(list *);
void display();
main()
{
	list *start=NULL;
	int ch;
	do
	{
	display(start);
		printf("\n press 1 for push");
		printf("\n press 2 for pop");
		printf("\n enter ur choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(top<(max-1))
				{
					if(top==0)
					{
						start=create();
					}
					else
						start=insert_front(start);
						top++;
				}
				else
					printf("stack overflow");
				break;
			case 2:
				if(top==-1)
					printf("stack is empty");
				else
				{
					start=del_front(start);
					top--;
				}
				break;
			default:
				printf("\n wrong choice");
		}
		printf("\n press 1 for continue");
		scanf("%d",&ch);
	}while(ch==1);
}
list *create()
{
	list *p;
	int d;
	p=(list *)malloc(sizeof(list));
		printf("enter data");
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
list *del_front(list * start)
{
	list *p;
	p=start;
	start=p->link;
	p->link=NULL;
	free(p);
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
