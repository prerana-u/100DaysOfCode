#include<stdio.h>
#include<stdlib.h>

void display(int arr[], int size)
{            
    int i;
    for(i=0;i<size;i++)
    {
    	printf("%d ", arr[i]);
	}
       
    printf("\n");
}

void bSort(int arr[], int n)
{          
    int i, j,k=1;
    for(i=0;i<n-1;i++)
   	{
   
   	 for (j=0; j <n-i-1; j++)
            if (arr[j] > arr[j + 1])
            {
            	int temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
                
   	}
     printf("\n\nThe sorted array is: ");
     display(arr,n);
    printf("\n\nThe median of the sorted elements is: %d",arr[n/2]);
}

void main()
{

	int r,c;
	int i,j,k=0;
	int * arr;
	printf("\nEnter the size of the array: ");
	scanf("%d",&r);
	printf("\nEnter the column size: ");
	scanf("%d",&c);
	arr= (int *)malloc(r*c*sizeof(int));
	printf("\nEnter the array elements (in Ascending Order): \n");
	int nums[r][c];
	for( i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&nums[i][j]);
	//	printf("\n%d",*(nums+i));
	}
	printf("\n\nThe matrix is: \n");
	for(i=0;i<r;i++) 
	{ 
		for(j=0;j<c;j++) 
		{ 
			printf("%d   ",nums[i][j]); 
			arr[k]=nums[i][j]; 
			k++; 
		} 
		printf("\n"); 
	} 
	bSort(arr,r*c);

}