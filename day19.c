#include<stdio.h>
#include<stdlib.h>
int majorityElement(int a[], int size)
{
    int *temp;
    temp=(int *)malloc(size*sizeof(int));
    int i,j,c=0;
    for(i=0;i<size;i++)
    {
        c=0;
        for(j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        temp[i]=c;
    }
    for(i=0;i<size;i++)
    {
        if(temp[i]>=size/2)
        {
            return a[i];
        }
    }
    return -1;
        
}
void main()
{
	int *a,*b,n,m;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("\nEnter the elements: \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe majority element of the  array is: %d",majorityElement(a,n));
}