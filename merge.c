#include<stdio.h>
#include<stdlib.h>
void mergesort(int a[],int,int);
void merge(int a[],int,int,int);
void main()
{
	int a[80],i,n;
	printf("\n how many numbers:");
	scanf("%d",&n);
	printf("\n enter the numbers:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	mergesort(a,0,n-1);
	printf("\n the sorted element sort:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
void mergesort(int a[],int lb,int up)
{
	int mid;
	if(lb!=up)
	{
		mid=(up+lb)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,up);
		merge(a,lb,mid,up);
	}
}
void merge(int a[],int m,int h,int n)
{
	int  i,j,k,c[80];
	i=m;
	j=h+1;
	k=m;
	while((i<=h)&&(j<=n))
	{
		if(a[i]<a[j])
		{
			c[k]=a[i];
			k=k+1;
			i=i+1;
		}
		else
		{
			c[k]=a[j];
			k=k+1;		
			j=j+1;
		}
	}
	while(i<=h)
	{
		c[k]=a[i];
		k=k+1;
		i=i+1;
	}
	while(j<=n)
	{
		c[k]=a[j];
		k=k+1;
		j=j+1;
	}
	for(i=m;i<=n;i++)
	{
		a[i]=c[i];
	}
}	
