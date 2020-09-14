/*  .Write a program which accept string from user and toggle the case. 

Input : “Marvellous Multi OS” 
Output : mARVELLOUS mULTI os
*/

#include<stdio.h>      

void ChangeCase( char str[] );

void ChangeCase( char str[])
{
	int i = 0;
	char ch = '\0';
 
    while(str[i] != '\0')
    {
       
		if(str[i] >= 'a' && str[i] <= 'z')
		{
         str[i] = str[i] - 32;
		 ch = str [i];
		 printf("%c",ch);
		 i++;
		}
		
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
         str[i] = str[i] + 32;
		 ch = str [i];
		 printf("%c",ch);
		 i++;
		}
		
		else if( str[i]== ' ')
		{
		  printf(" ");
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