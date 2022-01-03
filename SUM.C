#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s,c;
	clrscr();
	printf("\nEnter value :");
	scanf("%d",&n);
	c=0;
	s=0;
	while(n>0)
	{
		c=n%10;
		n=n/10;
		s=s+c;
	}
	printf("\nsum of number is :%d",s);
	getch();
}