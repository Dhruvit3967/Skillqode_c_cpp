#include<stdio.h> 
void main()
{
	int a[10],n=0,n1=0;
	int i,total;
	for(i=0;1<10;i++)
		{
			printf(" Enter a[%d] :",i);
			scanf("%d"‚&a[i]);
		}
	for(i=0;i<10;i++)
	{ 
		if(a[i]%2!=0)
		{
			printf("\n Odd a[%d] : %d",i,a[i]);
			n+=a[i];
		}
	}
	
		for (i=0;i<10;i++)
	{
		if(a[i]%2==0)
			{
				printf("\n Even a[%d] : %d",i,a[i]);
				n1+=a[i];
			}
	}
	printf("\n\n Total of Odd %d \t Total of Even %d", n+=0, n1+=0);
	total=n+n1;
	printf("\n\n Total : %d",total);
}