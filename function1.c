#include<stdio.h>
void dosum()
{
	int a,b;
	printf("\n Enter Two value : ");
	scanf("\n %d %d",&a,&b);

	printf("\n sum : %d",a+b);
	printf("\n sum : %d",a-b);
	printf("\n sum : %d",a*b);
	printf("\n sum : %d",a%b);
	printf("\n sum : %d",a/b);
}
int main()
{
	dosum();
}