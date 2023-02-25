#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool searchMatrix(int** matrix, int matrixSize, int matrixColSize, int target){
int i,j;
int c = matrixColSize;
 for (int i = 0; i < matrixSize; i++) 
            for (int j = 0; j < c; j++) 
                if (matrix[i][j] == target)
                    return true;
        return false;
}

void main()
{

	int r,c;
	int i,j,t;
	printf("\nEnter the size of the array: ");
	scanf("%d",&r);
	printf("\nEnter the column size: ");
	scanf("%d",&c);
	printf("\nEnter the array elements (in Ascending Order): \n");
	int nums[r][c];
	for( i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",nums[i][j]);
	//	printf("\n%d",*(nums+i));
	}

	printf("\nEnter the element to be found: ");
	scanf("%d",&t);
	printf("\nIs the element found in the matrix: ");
	if(searchMatrix(nums,r,c,t)==true)
	{
		printf("True");
	}
	else
	printf("False");
}