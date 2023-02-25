#include<stdio.h>
#include<stdlib.h>
int removeDuplicates(int* nums, int numsSize){
   int *a;
   a= (int * )malloc(numsSize*sizeof(int));
   int i,j=0;
   for(i=0;i<numsSize-1;i++)
   {
      if(nums[i]!=nums[i+1])
      {
          a[j]=nums[i];
        //  printf("%d",a[j]);
          j++;

      }
       
   }

   a[j]=nums[i];
   for(i=0;i<j+1;i++)
   {
       nums[i]=a[i];
      
   }
  return j+1;  
}
void main()
{
	int *a,n;
	int i,t;
	printf("\nEnter the number of elements in the array: ");
	scanf("%d",&n);
	printf("\nEnter the elements of the array: \n");
	a= (int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\nThe  array is: ");
	for(i=0;i<n;i++)
	{
		
		printf("%d ",a[i]);
	}
	t=removeDuplicates(a,n);
	printf("\n\nThe array after removing duplicates is: ");
	for(i=0;i<t;i++)
	{
		printf("%d ",a[i]);
	}
}