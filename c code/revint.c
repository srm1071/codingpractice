#include<stdio.h>
void main()
{
    int n,i,count=0,rev=0,rem,temp,temp2;
    printf("enter num \n");
    scanf("%d",&n);
    temp2=n;
    temp=n;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("count is %d\n",count);
    if(count==5)
    {
        while(temp>0)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
        printf("reverse is %d \n",rev);
    }
    else
        printf("not eligible");
    if(temp2==rev)
        printf("palindrome \n");
    else
        printf("u r offline \n");
    getch();
}
