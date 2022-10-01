#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter A value : ");
	scanf("%d",&a);
	printf("Enter B value : ");
	scanf("%d",&b);
	c=a;
	a=b;
 	b=c;
	printf("\n value A : %d",a);
	printf("\n Address A : %u",&a);
	printf("\n value B : %d",b);
	printf("\n Address B : %u",&b);
}