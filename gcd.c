#include<stdio.h>
#include<stdlib.h>
int gcdn(int,int);
main()
{
	int a,b,gcd;
		printf("enter two numbers");
		scanf("%d%d",&a,&b);
	gcd=gcdn(a,b);
		printf("gcd is %d",gcd);
}
int gcdn(int x,int y)
{
	int r;
	if(y==0)
	{
		return(x);
	}
	else
	{
		r=x%y;
		return(gcdn(y,r));
	}
}

