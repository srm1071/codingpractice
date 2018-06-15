#include<stdio.h>
int main()
{
    int n,i;
    printf("enter highest number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%7!=0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
