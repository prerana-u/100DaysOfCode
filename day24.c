#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n,*arr,i,j,prod=1;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	printf("\nEnter the array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(arr+i));
	
	}
	for(i=0;i<n;i++)
	{	
		prod=1;
		for(j=0;j<n;j++)
		{
			
			if(arr[i]!=arr[j])
			{
				prod*=arr[j];
			
			}
			
		}
		printf("\nProduct= %d",prod);
		printf("\n\n");
		
	}

}