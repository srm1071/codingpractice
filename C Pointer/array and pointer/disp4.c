#include<stdio.h>
int main()
{
    int a[2][2]={{1,2},{3,4}};
    int (*ptr)[2];
    int i,j;
    ptr=a;
    for(i=0;i<2;i++)
    {
        printf("\n");
        for(j=0;j<2;j++)
        {
            printf("\t%d",*(*(ptr+i)+j));
        }
    }

}
