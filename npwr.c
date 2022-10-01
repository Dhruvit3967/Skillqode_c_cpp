//WPNR

#include<stdio.h>
#include<math.h>
float CmInt(float p,float r,float t)
{
        float ci;
        ci=p*(pow((1+r/100),t));
	printf("\n CmInt = %f" , ci);	
        return ci;
}
int main()
{
        float principle,rate,time,CI;
        
        printf(" Enter principle(amount) :");
        scanf("%f",&principle);

        printf(" Enter time :");
        scanf("%f",&time);

        printf(" Enter rate :");
        scanf("%f",&rate);

        CI=CmInt(principle,rate,time);
	
	
}