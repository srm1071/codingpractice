#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int *ptr2;
    int *ptr1=arr;
    ptr2=&arr[4];
    while(ptr1<ptr2)
    {
        printf("%d",*arr);
        ptr1++;
    }
    return 0;
}
