#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter ages\n");
    scanf("%d\n %d\n %d\n",&a,&b,&c);
    if(a<b && a<c)
        printf("%d is younger",a);
    else if(b<c && b<a)
        printf("%d is younger age",b);
    else
        printf("%d is younger",c);
    getch();
}
