#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],temp;
    int i=0,j=0;
    printf("enter string");
    gets(a);
    j=strlen(a)-1;
    while(i<j)
    {
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
        i++;
        j--;
    }
    puts(a);
    return 0;
}
