#include<stdio.h>
int main()
{
    int i,n,sum=0,sum1=0;
    printf("enter highest integer\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        printf("%d\n",sum);
        sum1=sum1+sum;
        printf("%d\n",sum1);
    }
    printf("total sum is %d",sum1);
    return 0;
}
