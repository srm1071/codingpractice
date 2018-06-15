#include<stdio.h>
#include<stdlib.h>
int binary(int);
main()
{
	int num,bin;
		printf("enter a decimal number");
		scanf("%d",&num);
		printf("binary num is %d",num);
	bin=binary(num);
		printf("\n");
}
int binary(int n)
{
	if(n==0)
	{
		printf("0");
		return(0);
	}
	else
	{
		binary(n/2);
		printf("\n %d",n%2);
	}
}
