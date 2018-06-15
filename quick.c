#include<stdio.h>
#include<stdlib.h>
void quicksort(int a[],int,int);
int partition(int a[],int,int);
main()
{
	int a[80],i,n;
	printf("enter how many numbers:");
	scanf("%d",&n);
	printf("\n enter the numbers:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	printf("\n sorted element is:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
void quicksort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=partition(a,low,high);
		quicksort(a,low,mid-1);
		quicksort(a,mid+1,high);
	}
}
int partition(int a[],int lb,int ub)
{
	int temp,pivot,down,up;
	pivot=a[lb];
	up=ub;
	down=lb;
	while(down<up)
	{
		while(a[down]<=pivot&&down<up)
			down++;
		while(a[up]>pivot)
			up--;
		if(down<up)
		{
			temp=a[down];
			a[down]=a[up];
			a[up]=temp;
		}
	}
	a[lb]=a[up];
	a[up]=pivot;
	return(up);
}	
