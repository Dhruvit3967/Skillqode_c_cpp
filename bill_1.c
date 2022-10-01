#include<stdio.h>
int rollno,m1,m2,m3;
int maulik(int rollno,int m1,int m2,int m3)
{
             int total;
         float per;
         char grade;
            printf("\n-----------------------------------");
        printf("\n \n Rollno\t Total \t Per \t Grade ");
        printf("\n-----------------------------------");
        printf("\n-----------------------------------");
        total=m1+m2+m3;
        //printf("\t %d",total);
        per=total/3;
        //printf("\t%.2f",per);
        
                if(per>90)
                {
                        grade='A';
                }
                else if(per>75)
                {
                        grade='B';
                }
                else if(per>60)        
                {
                        grade='C';
                }
                 else if(per>35)
                {
                        grade='D';        
                }
                 else if(per<=35)
                {
                        grade='F';
                }
                //printf("\t %c",grade);
        printf("\n %d \t %d \t %.2f \t %c ",rollno,total,per,grade);        
        printf("\n-----------------------------------");    
}
void getdata()
{    
        int rollno,m1,m2,m3;
         printf(" Enter  Rollno :");
         scanf("%d",&rollno);
         printf(" Enter  scin : ");
         scanf("%d",&m1);
         printf(" Enter  English :");
         scanf("%d",&m2);
         printf(" Enter  Maths :");
         scanf("%d",&m3);
        maulik(rollno,m1,m2,m3);
}
int main()
{        
    getdata();        
}