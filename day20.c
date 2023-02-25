#include<stdio.h>
#include<stdlib.h>
int reverse(int x){     
    long int c=0;
 
    while(x!=0)
    {
   
        c=c*10 + (x%10);
        x=x/10;
    }
    if(c>2147483647 || c< -2147483647)
        return 0;
    return c;

}

void main()
{
	int x;
	printf("\nEnter a number: ");
	scanf("%d",&x);
	printf("\nThe reverse of the numer is: %d",reverse(x));
}