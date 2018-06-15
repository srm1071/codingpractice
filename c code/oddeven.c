#include<stdio.h>
void main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    if(n%2==0)
        printf("number is even");
    else
        printf("odd number");
    getch();
}
