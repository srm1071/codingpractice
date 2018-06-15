#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter an integer");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i)
                printf("%d",j);
            else
                printf(" ");
        }
    }
    return 0;
}
