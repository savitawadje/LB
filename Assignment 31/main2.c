/*
    Problem statement :
  Write a program which accept string from user and copy that 
characters of that string into another string by removing all white 
spaces.
 
Input : “Marvel lous Pyth on”
Output : “MarvellousPython”
 */

#include<stdio.h>

void StrcatXX(char *str)
{
	int i=0; 
	int j=0;
	char str1[30];

    while(str[i] != '\0')    // Junya wahichya shewati ja
    {
        if ( str[i]!= ' ' ) 
		{
			str1[j++]= str[i];
		}
		
		i++;
    }
       
    str1[j] = '\0';
	
	printf("\n\nThe string after removing all the spaces is: %s", str1);
	
}

int main()
{
	
	
    char arr[30];   // Bharaleli book
    char brr[30];
    
    printf("Please enter first string\n");
    scanf("%[^'\n']s",arr);
   
     StrcatXX(arr);
    
   
    
    return 0;
	
	
}






























