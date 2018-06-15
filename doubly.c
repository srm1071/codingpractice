#include<stdio.h>
#include<malloc.h>
struct node
{
	struct node*head;
	int n;
	struct node*next;
}*h,*temp1,*temp2,*temp3,*temp4;
void create();
void insert_strat();
void insert_givennode();
void insert_end();
void delete();
void display();
int count=0;
void main()
{
	int ch;
	h=NULL;
	temp1=temp2=NULL;
	printf("\n\t 1.CREATION");
	printf("\n\t 2.INSERT START");
	printf("\n\t 3.INSERT AT END");
	printf("\n\t 4.INSERT AT POSITION i");
	printf("\n\t 5.DELETE");
	printf("\n\t 7.DSISPLAY");
	printf("\n\t 8.exit");
	while(1)
	{
		printf("\n enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case1:
				create();
				break;
			csae2:
				insert_start();
				break;
			case3:
				insert_end();
				break;
			case4:
				insert_givennode();
				break;
			case5:
				delete();
				break;
			case7:
				display();
				break;
			default:
 				printf("\n Wrong Choice Menu:");
		}
	}
}
void create()
{
	int data;
	temp1=(struct node*)malloc(sizeof(struct node));
	temp1->head=NULL;
	temp1->next=NULL;
	printf("\n Enter Value For Node:");
	scanf("%d",&data);
	temp1->n=data;
	count++;
}

void insert_start()
{
	int h;
	if(h==NULL)
	{
		create();
		h=temp1;
		temp2=h;
	}
	else
	{
		create();
		temp1->next=h;
		h->head=temp1;
		h=temp1;
	}
}
void insert_end()
{
	if(h==NULL)
	{
		create();
		h=temp1;
		temp2=h;
	}
	else
	{
		create();
		temp2->next=temp1;
		temp1->head=temp2;
		temp2=temp1;
	}
}
void insert_givennode()
{
	int pos,i=2;
	printf("\n Enter Your Position To Be Insert:");
	scanf("%d",&pos);
	temp3=h;
	if((pos<1)||(pos>=count+1))
	{
		printf("\n Position Out Of Range To Insert:");
		return(0);
	}
	if((h==NULL)&&(pos!=1))
	{
		printf("\n Empty List Cannot Insert Other Then 1St Position:");
		return(0);
	}
	if((h==NULL)&&(pos==1))
	{
		create();
		h=temp1;
		temp2=h;
		return(0);
	}
	else
	{
		while(i<pos)
		{
			temp3=temp3->next;
			i++;
		}
		create();
		temp1->head=temp3;
		temp1->next=temp3->next;
		temp3->next->head=temp1;
		temp3->next=temp1;
	}
}
void delete()
{
	int i=1,pos;
	printf("\nEnter Position To Be Delete.");
	scanf("%d",&pos);
	temp3=h;
	 if((pos<1)||(pos>=count+1))
        {
                printf("\n Position Out Of Range To Insert:");
                return(0);
	}
	if(h==NULL)
	{
		printf("\n ERROR: Empty List No Elements To Delete.");
		return(0);
	}	
	else
	{
	        while(i<pos)
                {
                        temp3=temp3->next;
                        i++;
		}
		if(i==1)
		{
			if(temp3->next=NULL)
			{
				printf("\nNode Delete From List.");
				free(temp3);
				temp3=h=NULL;
				return(0);
			}
		}
		temp3->next->head=temp3->head;
		if(i!=1)
		{
				temp3->head->next=temp3->next;
		}
		if(i==1)
		{
			h=temp3->next;
		}
		printf("\n Node Delete");
		free(temp3);
	}
	count--;
}
void display()
{
	struct node*temp1;
	temp1=head;
	if(temp1==NULL)
	{
		printf("\n List Is Empty.");
	}
	while(temp1!=NULL)
	{
		printf("->%d",temp1->data);
		temp1=temp1->next;
	}
}
