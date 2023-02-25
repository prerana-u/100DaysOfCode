#include<stdio.h>
#include<stdlib.h>
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
 int *temp;
 int n=nums1Size+nums2Size;
 temp= (int *)malloc(n* sizeof(int));
    int x =0;
    
        for (int i = 0 ; i<n ; i++){
            if (i < nums1Size)
               temp[i] = nums1[i];
            else
                temp[i] = nums2[x++];

        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(temp[i]>temp[j]){
                    int t= temp[i];
                    temp[i]=temp[j];
                    temp[j]=t;
                }
            }
        }
        if ((n) %2 ==0){
            int l = (n) /2;
            return (temp[l]+temp[l-1])/2.00;
        }
        else {
            return temp[(n)/2];
        }
}

void main()
{
	int *a,*b,n,m;
	printf("\nEnter the size of first array: ");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("\nEnter the elements (in a sorted manner): \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the size of second array: ");
	scanf("%d",&m);
	b=(int *)malloc(m*sizeof(int));
	printf("\nEnter the elements (in a sorted manner): \n");
	for(int i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\nThe median of the two arrays is: %.2f",findMedianSortedArrays(a,n,b,m));
}