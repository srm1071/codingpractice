#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("Enter a character in uppercase : ");
	scanf("%c",&ch);
	ch=ch+32;
	printf("character in lowercase = %c",ch);
	getch();
}
