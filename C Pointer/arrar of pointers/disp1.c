#include<stdio.h>
int main()
{
    int i;
    int a[]={1,2,3};
    int b[]={4,5,6};
    int c[]={7,8,9};
    int *ptr[3]={a,b,c};
    for(i=0;i<=3;i++)
        printf("%d\n",*ptr[i]);
    return 0;
}
