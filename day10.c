#include<stdio.h>
#include<stdbool.h>
bool isPowerOfThree(int n){
    if (n < 1) return false; 
    while(n % 3 == 0)
    {
        n = n / 3; 
    } 
   
    if(n==1)
    return true;
    return false;
}
void main()
{
	int n;
	printf("\nEnter a number to check: ");
	scanf("%d",&n);
	if(isPowerOfThree(n)==true)
	printf("\nIt is a power of three!");
	else
	printf("\nIt is not a power of three!");
}