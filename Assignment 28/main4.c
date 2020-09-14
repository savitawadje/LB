 /*   Write a program which accept string from user and display only 
digits from that string. 

Input : “marve89llous121” 
Output : 89121 

Input : “Demo” 
Output :
*/

#include<stdio.h>      

void ChangeCase(char * );

void ChangeCase(char *str)
{
	int i = 0;
	char ch = '\0';
	
	for (i = 0; str[i]!='\0'; i++) 
	{
			  
      if((str[i] >= '0' ) && ( str[i] <= '9'))
      {
		 ch = str[i];
		 
		 printf("%c",ch);
		 
	
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