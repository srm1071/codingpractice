#include<stdio.h>
#include<malloc.h>
struct binarytree
{
	struct binarytree *left;
	int info;
	struct binarytree *right;
};
typedef struct binarytree node;
node *createTree(node *root,int key);
void preorder(node *root);
void inorder(node *root);
void postorder(node *root);
main()
{
	node *root=NULL;
	int i,key,n;
	printf("\n Number of nodes : ");
	scanf("%d,&n");
	for(i=0;i<n;i++)
	{
		printf("\n Node info of %d : ",i+1);
		scanf("%d",&key);
		if(key==0)
			break;
		root=createTree(root,key);
	}
	printf("\n Preorder : ");
	preorder(root);
	printf("\n Inorder : ");
        inorder(root);
	printf("\n Postorder : ");
        postorder(root);
}
node *createTree(node *root,int key)
{
	if(root==NULL)
	{
		root=(node *)malloc(sizeof(node));
		root->left=NULL;
		root->info=key;
		root->right=NULL;
		return;
	}
	else if(key<root->info)
		root->left=createTree(root->left,key);
	else
		root->right=createTree(root->right,key);
	return root;
}
void preorder(node *root)
{
	if(root != NULL)
	{
		printf("%d - ",root->info);
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(node *root)
{
        if(root != NULL)
        {
                inorder(root->left);
		printf("%d - ",root->info);
                inorder(root->right);

        }
}
void postorder(node *root)
{
        if(root != NULL)
        {
                postorder(root->left);
                postorder(root->right);
		printf("%d - ",root->info);
        }
}

