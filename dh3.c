// Roll no.  m1 m2 m3 total per grade

#include<stdio.h>
int main()
{
	int Rollno[5];
	int i,m1[5],m2[5],m3[5],total[5];
	float per[5];
	char grade[5];

	for(i=0;i<5;i++)
	{
	printf("Enter Rollno : ");
	scanf("%d",&Rollno[i]);

	printf("Enter m1 : ");
	scanf("%d",&m1[i]);
	printf("Enter m2 : ");
	scanf("%d",&m2[i]);
	printf("Enter m3 : ");
	scanf("%d",&m3[i]);
	
	}

	printf("\nRollno\tm1\tm2\tm3\ttotal\tper\tGrade");
	for(i=0;i<5;i++)
	{
		total[i]=m1[i]+m2[i]+m3[i];
		per[i]=total[i]/3;
		
	
	if(per[i]>=75)
		{
			grade[i]='A';
		}
		 else if(per[i]>65 && per[i]<75)
		{
			grade[i]='B';
		}
		else if(per[i]>50 && per[i]<65)
		{
			grade[i]='C';
		}
		else if(per[i]>35 && per[i]<50)
		{
			grade[i]='D';
		}
		else
		{
			grade[i]='F';
		}
	printf("\n%d\t%d\t%d\t%d\t%d\t%.2f\t%c",Rollno[i],m1[i],m2[i],m3[i],total[i],per[i],grade[i]);	
	}
	

}