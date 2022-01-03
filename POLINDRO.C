#include<stdio.h>
#include<conio.h>
void main()
{
	int no,rev=0,rem,n;
	clrscr();
	printf("\nEnter number :");
	scanf("%d",&no);
	n=no;
	while(no!=0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	if(n==rev)
	{
		printf("\n%d is polindrom number",n);
	}
	else
	{
		printf("\n%d is not polindrom number",n);
	}
	getch();
}
