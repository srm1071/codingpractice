#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("enter number");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        printf("%d\n",i);
        fact=fact*i;
    }
    printf("factorial is%d\t",fact);
    return 0;
}
