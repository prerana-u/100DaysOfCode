#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int lengthOfLastWord(char * s){
    int i,j,c=0;
    int n = strlen(s);
    i=n-1;
    while(s[n-1]==' ')
    {
            n--;
            
    }
    if(n==1)
    {
        return n;
    }
    else
    { 
        for(i=n-1;s[i]!=' ' && i>=0;i--)
        {
            c++;
        } 
    }
   
    return c;
}
void main()
{
	char a[50];
	printf("\nEnter a string: ");
	gets(a);
	printf("\nThe length of the last word is: %d",lengthOfLastWord(a));
}