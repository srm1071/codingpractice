#include<stdio.h>
int main()
 {
   int n,count,sum=0,rem;
   printf("enter number");
   scanf("%d",&n);
   while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
   printf("sum is %d",sum);
}
