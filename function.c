#include<stdio.h>
#include<string.h>
void main()
{
        int i;
        char str1[20],str2[20];
        
        printf("Enter String :");
        gets(str1);

        strcpy(str2,str1);
        printf("\n str2\t\t: %s",str2);

        strrev(str2);
        printf("\n Reverse\t: %s",str2);
        
        int len= strlen(str1);
        printf("\n String Length : %d",strlen(str1));
        
        strcmp(str2,str1);
        printf("\n Compare\t: %d",strcmp(str1,str2));        

        if(strcmp(str1,str2)==0)
        {
           printf("\n This is Palidrom");
        }
        else
        {
           printf("\n This is Not Palidrom");
        }
}