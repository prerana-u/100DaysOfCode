#include<stdio.h>
#include<stdlib.h>
int* sortArrayByParity(int* nums, int numsSize){
        
        int *nums2= (int *) malloc(numsSize * sizeof(int));
        int i,j=0;
        for(i=0;i<numsSize;i++)
        {
            if(*(nums+i)%2==0)
            {
               nums2[j]=nums[i];
                //printf("%d",nums2[j]);
               j++;
            }
           
        }
        for(i=0;i<numsSize;i++)
        {
           if(*(nums+i)%2!=0)
            {
               nums2[j]=nums[i];
              // printf("%d",nums2[j]);
               j++;
            }
           
        }
        return(nums2);
}
void main()
{
	int *nums, *nums2;
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

	printf("\nSorted Array is: ");
	nums2=sortArrayByParity(nums,n);
	for(int i=0;i<n;i++)
	{
		printf("\n%d",*(nums2+i));
	}
}