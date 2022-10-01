#include<stdio.h>
int harsh()
{

	int n,rev=0,i;

	printf("\n Enter Number :");
	scanf("%d",&n);
	while(n!=0)
	{
	i=n%10;
	rev=rev *10+i;
	n/=10;
	}
	printf("\nrevrese = %d",rev);
}
int main()
{
	harsh();
}
