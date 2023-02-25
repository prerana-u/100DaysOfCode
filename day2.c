#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
bool containsDuplicate(int* nums, int numsSize){
    int i,j;
    for(i=0;i<numsSize;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(*(nums+i)==*(nums+j))
            {
              return true;
            }
        }
    }

    return false;
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

	printf("\nDuplicates exist in array: ");
	if(containsDuplicate(nums,n)==true)
	{
		printf("True");
	}
	else
	printf("False");

}