 /*  Accept character from user. If character is small display its 
corresponding capital character, and if it small then display its 
corresponding capital. In other cases display as it is. 
Input : Q 
Output : q 
Input : m 
Output : M 
Input : 4 
Output : 4
*/

#include<stdio.h>      

void ChangeCase(char * );

void ChangeCase(char *ch)
{
	int i = 0;
	
	for (i = 0; ch[i]!='\0'; i++) 
	{
      if(ch[i] >= 'a' && ch[i] <= 'z')
      {
         ch[i] = ch[i] - 32;
		 printf("%s" , ch);
		 
      }
	   else if(ch[i] >= 'A' && ch[i] <= 'Z')
      {
         ch[i] = ch[i] + 32;
		 printf("%s" , ch);
		 
      }
		
		else
		{
			 printf("%s" , ch);
	    }
	}
	
	
}



int main()          
{
	char ch[100];
	
	
	printf("Enter the string \n ");
	scanf("%s",ch);
	
	ChangeCase(ch);
	
	
	return 0;
	}