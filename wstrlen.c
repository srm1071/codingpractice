#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int str[50],i=0;
    printf("enter the string\n");
    gets(str);
    while(str[i]!='\0');
        i++;
    puts(str);
    printf("length is %d ",i);
    return 0;
}
