#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a=0,b=1,c;
	clrscr();
	printf("\nEnter the number :");
	scanf("%d",&n);
	printf("\nFibonacci series is :");
	for(i=3;i<=n;i++)
	{
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
	}
	getch();
}