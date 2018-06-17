#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int i,*ptr;
    ptr=&a[2];
    *ptr=-1;
    *(ptr+1)=0;
    *(ptr-1)=-1;
    for(i=0;i<5;i++)
        printf("%d",*(a+i));
    return 0;
}
