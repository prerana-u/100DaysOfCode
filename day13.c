#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int searchInsert(int* nums, int numsSize, int target){
     int i;
    
     for(i=0;i<numsSize;i++)
     {
        if(target<=nums[i])
        {
            return i;
        }
        
     }   
    return numsSize;
}
void sort(int *arr, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                temp=*(arr+j);
				*(arr+j)=*(arr+j+1);
				*(arr+j+1)=temp;	
			}
}
void main()
{
	int *a,n;
	int t;
	srand(time(0));
	printf("\nEnter the number of elements in the array: ");
	scanf("%d",&n);
	a= (int *)malloc(n*sizeof(int));
	printf("\nRandomly Populating the Array...\n");
	for(int i=0;i<n;i++)
	{
	//Negative Numbers
	//	a[i]=rand()%100-50;
	//Positive Numbers in a range (1-100)
	//	printf("i= %d",i);
		a[i]=rand()%100+1;
	}
	sort(a,n);
	printf("\nThe  array is: ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n\nEnter the target: ");
	scanf("%d",&t);
	printf("\nThe target is found at or can be inserted at index %d!",searchInsert(a,n,t));
}