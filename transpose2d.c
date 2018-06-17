#include<stdio.h>
#include<math.h>
int main()
{
    int a[3][3],tran[3][3],i,j;
    printf("enter the matrix elements");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            tran[i][j]=a[j][i];
        }
    }
    printf("transpose is... \n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("\t%d",tran[i][j]);
        }
    }
    return 0;
}
