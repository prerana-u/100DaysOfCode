#include<stdio.h>
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
	printf("\nDuplicates exist in array: %s",containsDuplicate(nums,n));
	return 0;
}