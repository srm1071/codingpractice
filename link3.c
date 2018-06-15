#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
	int data;
	struct list *link;
}list;
list * create();
list * insert_front(list *);
list * reverse(list *);
void display();
main()
{
	list * m=NULL;
	int k;
	if(m==NULL)
		m=create();
		printf("\n\t press 1 for create a list");
		scanf("%d",&k);
	while(k==1)
	{
		m=insert_front(m);
			printf("\n\t press 1 for continue");
			scanf("%d",&k);
	}
	display(m);
	m=reverse(m);
	display(m);
}
list * create()
{
	list * p;
	int d;
	p=(list*)malloc(sizeof(list));
		printf("enter data");
		scanf("%d",&d);
	p->data=d;
	p->link=NULL;
	return(p);
}
list * insert_front(list * start)
{
	list * p;
	p=create();
	p->link=start;
	start=p;
	return(start);
}
list *reverse(list * start)
{
	list * p,* q,* r,* s;
	int chk=0;
	p=start;
	q=start;
	while(q->link!=NULL)
	{
		r=q;
		q=q->link;
		chk=1;
	}
	if(chk==1)
	{
		start=q;
		r->link=NULL;
		while(p->link!=NULL)
		{
			r=p;
			while(r->link!=NULL)
			{
				s=r;r=r->link;
			}
			q->link=r;
			s->link=NULL;
			q=q->link;
		}
		q->link=p;
	}
	return(start);
}
void display(list * start)
{
	list * p;
	p=start;
	while(p!=NULL)
	{
		printf("|%d|->",p->data);
		p=p->link;
	}
}
	
