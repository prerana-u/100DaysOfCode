#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
bool isMonotonic(int* nums, int numsSize){
    int i,j;
    bool c1=true,c2=true;
    for(i=0;i<numsSize-1;i++)
    {
        if(*(nums+i)< *(nums+i+1))
        c1=false;
    }
    for(i=0;i<numsSize-1;i++)
    {
        if(*(nums+i)> *(nums+i+1))
        c2=false;
    }
    return c1||c2;
}
void main()
{
	int *nums;
	int n;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	
	nums=(int *)malloc(n*sizeof(int));
	printf("\nEnter the array: \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",(nums+i));
	//	printf("\n%d",*(nums+i));
	}

	printf("\nArray is Monotonic: ");
	if(isMonotonic(nums,n)==true)
	{
		printf("True");
	}
	else
	printf("False");

}