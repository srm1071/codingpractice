#include<stdio.h>

#include<stdlib.h>

typedef struct tree

{
	int data;
	
	struct tree *lc;

	struct tree *rc;

}tree;

main()

{

	int k,digit;

	tree *root=NULL,*temp;

	do
	
	{

		temp=create(digit);

		if(root==NULL)

			root=temp;

		else

			insert(root,digit);

		printf("want continue?press 1");

		scanf("%d",&k);

	}while(k==1);

}

tree *create(int digit)

{
	int d;

	tree *p;

	p=(tree*)malloc(sizeof(tree));

		printf("enter data");

		scanf("%d",&d);
	p->data=d;

	p->lc=NULL;

	p->rc=NULL;

	return(p);

}

tree *insert(tree *root,int digit)

{
	tree *p;

	if(digit<root->data)

	{

		if(root->lc==NULL)

		{

			p=create(digit);

			root->lc=p;

		}

		else

			insert(root->lc,digit);

	}

	else

	{

		if(root->rc==NULL)

		{

			p=create(digit);

			root->rc=p;

		}

		else

			insert(root->rc,digit);

	}

	return(root);

}
