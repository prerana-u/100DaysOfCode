#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void ssort(char string[50])
{
	int i,j;
	char temp;
	char str1[50];
	int n=strlen(string);
	for (i = 0; i < n-1; i++) 
	{
      for (j = i+1; j < n; j++) 
	  {
         if (string[i] > string[j]) 
		 {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }
   	j=0;
   	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]!=string[i+1])
		{
			str1[j]=string[i];
			printf("%c",str1[j]);
			j++;
		}
		
	}
	int len=strlen(str1);
	printf("\nThe length of the smallest window is %d",len);
}
void main()
{
	char str[50],str1[50];
	int i,j=0,count=0;
	printf("\nEnter a string: ");
	scanf("%s",&str);
	ssort(str);
}