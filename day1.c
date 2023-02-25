#include<stdio.h>
void main()
{
	int a[6],min,max;
	int pro=0;
	int b[6];
	int i,bd,sd;
	printf("\nEnter the prices of the stock for each day: \n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}

	min=a[0];

	for(i=0;i<3;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			bd=i+1;
			
		}
		
	}
	printf("\nYou can buy on day %d",bd);

	max=0;
	for(i=0;i<3;i++)
	{
		if(min<a[i] && i>(bd-1))
		{
			pro=a[i]-min;
			if(pro>max)
			{
				max=pro;
				sd=i+1;
			}
			
		}
	}
	if(max!=0)
	{
		printf("\nThe maximum profit can be obtained on day %d and it is: %d ",sd,max);
	}
	else
	{
		printf("\n\nNo profit can be made! Maximum profit is 0!");
	}

}