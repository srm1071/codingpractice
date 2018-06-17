#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    char str[20];
    printf("enter the string ");
    gets(str);
    while(str[i]!='\0');
        i++;
    printf("length is %d",i);
    return 0;
}
