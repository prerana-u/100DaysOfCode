#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int divide( int dividend,  int divisor){
    int n=0;
    signed int s=1;
    if(dividend<0 ^ divisor<0)
    {
        s=-1;
    }
    dividend=  abs(dividend);
    divisor = abs(divisor);
    while(dividend>=divisor)
    {
        dividend=dividend-divisor;
        n++;
        
    }
    return n*s;
}

void main()
{
	signed int dd,dv;
	printf("\nEnter the dividend: ");
	scanf("%d",&dd);
	printf("\nEnter the divisor: ");
	scanf("%d",&dv);
	printf("\nThe quotient is: %d",divide(dd,dv));
	
}