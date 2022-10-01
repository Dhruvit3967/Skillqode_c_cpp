#include<stdio.h>
int main()
{
	int i,j;
	int sum=0;
	int a[10];
	for(i=0;i<10;i++)
	{
		printf("\n enter value a[%d]:",i);
		scanf("\n %d",&a[i]);
	}
	printf("\n your array is \n");
	for(i=0;i<10;i++)
	{
		if(a[i]%2==1)
		{
			printf("\n odd num : %d",a[i]);
		}
		else
		{
			printf("\n even num : %d",a[i]);
		}	

	}
	for(i=1;i<10;i+=2)
	{
		sum=sum + i;
	}
	printf("\n sum of odd number =%d",sum);	
}