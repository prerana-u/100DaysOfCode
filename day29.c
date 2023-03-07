#include<stdio.h>
#include<stdlib.h>
void construct(int* original, int originalSize, int m, int n)
{
    int a[m][n];
    if(originalSize!=m*n)
    {
       printf("\nArray cannot be converted!");
       return;
    }
    else
    {   
    	printf("\nThe new 2D array is: \n");
		int i=0;
         while(i<originalSize)
         {
             for(int j=0;j<m;j++)
             {
                 for(int k=0;k<n;k++)
                 {
                    a[j][k]=original[i];
                    i++;
                    printf("%d ",a[j][k]);
                 }
                 printf("\n");
                
             }
         }
           
    }

}

void main()
{
	int *a,n,i;
	int r,c;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	
	a=(int *)malloc(n*sizeof(int));
	printf("\nEnter the array: \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",(a+i));
	}
	printf("\nEnter the row size and col size of the 2D array: ");
	scanf("%d %d",&r,&c);
	construct(a,n,r,c);
}
