/*  .Write a program which accept string from user and convert it into 
lower case. 

Input : “Marvellous Multi OS” 
Output : marvellous multi os
*/

#include<stdio.h>      

void ChangeCase( char str[] );

void ChangeCase( char str[])
{
	int i = 0;
	char ch = '\0';
 
    while(str[i] != '\0')
    {
        if( str[i]== ' ' )
		{
		  printf(" ");
		  i++;
		}
		else 
		{
         str[i] = str[i] + 32;
		 ch = str [i];
		 printf("%c",ch);
		 i++;
		}
	  
	  
	}
	
	
}



int main()          
{
	char ch[100];
	
	
	printf("Enter the string \n ");
	 scanf("%[^'\n']s",ch);
	
	ChangeCase(ch);
	
	
	return 0;
	}