#include<stdio.h>
#include<stdlib.h>
int binary_search(int a[],int,int);
void main()
{
    int a[10],key,i;
    printf("Enter the array elements \n");
    for(i=0;i<10;i++)
      scanf("%d",&a[i]);
    printf("Enter the item to be searched \n");
      scanf("%d",&key);
    if(binary_search(a,10,key))
      printf("\n item found");
    else
      printf("\n item not found");
}

int binary_search(int a[],int n,int key)
{
    int found=0,mid,low=0,high=n-1;
    while(low<high)
    {
        mid=(low+high)/2;
        if(key<a[mid])
           high=mid-1;
        else if(key>a[mid])
           low=mid+1;
        else
         {  
           found=1;
           break;
         }
    }
    return(found);
}
           
    
