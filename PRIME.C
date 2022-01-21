#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i,c=0;
	clrscr();
	printf("\nEnter value :");
	scanf("%d",&no);
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
			c=1;
			break;
		}
	}
	if(c==1)
	{
		printf("\n%d is not prime",no);
	}
	else
	{
		printf("\n%d is prime",no);
	}
	getch();
}
