#include<stdio.h>
int main()
{
	int a[5][5];
	int i,j,x=0,y=0,z=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Your Matrix is \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)	
		{
			printf("\t %d",a[i][j]);
		}
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				x=x+a[i][j];
			}
			else if(j>i)
			{
				y=y+a[i][j];
			}
			else
			{
				z=z+a[i][j];
			}
		}
		printf("\n");
	}
	printf("\n diagonal Total : %d ",x);
	printf("\n Upper Total : %d ",y);
	printf("\n Lower Total : %d ",z);
	
}