/* Accept character from user. If it is capital then display all the 
characters from the input characters till Z. If input character is small 
then print all the characters in reverse order till a. In other cases 
return directly. 
Input : Q 
Output : Q R S T U V W X Y Z 
Input : m 
Output : m l k j i h g f e d c b a 
Input : 8 
Output :
*/

#include<stdio.h>      

void ChangeCase(char * );

void ChangeCase(char * ch)
{
	int i =0;;
	
	if(ch[i] >= 'a' && ch[i] <= 'z')
  {
    for (i = ch[i]; i <= 'z'; i++)
	{
        printf("%c ", i);
	}
  }
  
   else if(ch[i] >= 'A' && ch[i] <= 'Z')
      {
		
    for (i = ch[i]; i <= 'Z'; i++)
	{
        printf("%c ", i);
	} 

	  }	
		


   else
		{
			 printf(" ");
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