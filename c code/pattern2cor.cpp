#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter an integer");
    scanf("%d",&n);
    k=n+1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=k-i)
                printf("1");
            else
                printf(" ");
        }
    }
    return 0;
}
