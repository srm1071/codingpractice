#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    printf("enter an integer");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i)
            {
                count++;
                printf("%d",count);
            }
            else
                printf(" ");
        }
    }
    return 0;
}
