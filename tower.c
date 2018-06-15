#include<stdio.h>
void towers(int,char,char,char);
int main()
{
	int num;
	printf("enter  the number of  disk:");
	scanf("%d",&num);
	printf("the sequence moves involved in the tower of  hanoie:\n");
	towers(num,'A','B','C');
	return(0);
}
void towers(int num,char frompeg,char topeg,char auxpeg)
{
	if(num=1)
	{	
		printf("\n Move disk 1 frompeg %c topeg %c",frompeg,topeg);
		return;
	}
	towers(num-1,frompeg,auxpeg,topeg);
	printf("\n Move disk %d frompeg %c topeg %c",num,frompeg,topeg);
	towers(num-1,auxpeg,topeg,frompeg);
}
