#include<stdio.h>
int main()
{
	int a=10,*p,**p2;
	p=&a;
	p2=&p;
	
	printf("\n value of a :%d",a);
	printf("\n value of a :%u",&a);	

	printf("\n value a using p :%d",*p);
	printf("\n address a using p :%u",p);
	printf("\n address of p :%u",&p);

	printf("\n value a using p2 :%d",**p2);
	printf("\n address a using p2 :%u",*p2);
	printf("\n address p using p2 :%u",p2);
	printf("\n address of p2 :%u",&p2);


}