#include<stdio.h>
#include<conio.h>
void main()
{
	int no,n,rev=0,rem;
	clrscr();
	printf("\nEnter the number :");
	scanf("%d",&no);
	n=no;
	for(;no>0;rev=rev+rem*rem*rem)
	{
		rem=no%10;
		no/=10;
	}
	if(rev==n)
	{
		printf("\nNo is Armstrong");
	}
	else
	{
		printf("\nNo is not Armsrtong");
	}
	getch();
}